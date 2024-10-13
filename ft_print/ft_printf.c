/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:53:42 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/13 21:43:38 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_printf_helper(va_list args, const char **format, int *count)
{
    (*format)++;
        if (**format == 'c')
            ft_m_putchar((char)va_arg(args, int), count);
        else if (**format == 's')
            ft_m_putstr(va_arg(args, char *), format, count);
 /*     else if (**format == 'p')
            ft_putvoid(va_arg(args, void *), &s, &count); // ???
        else if (**format == 'd')
            ft_putdecimal(va_arg(args, int *), &s, &count); // What? and ???  */
        else if (**format == 'i')
            ft_m_putnbr(va_arg(args, int), format, count);
 /*       else if (**format == 'u')
            ft_putunsdecimal(va_arg(args, int *), &s, &count); // What? and ???
        else if (**format == 'x')
            ft_puthexal(va_arg(args, int *), &s, &count); // What? and ???
        else if (**format == 'X')
            ft_puthexau(va_arg(args, int *), &s, &count); // What? and ??? */
        else if (**format == '%')
            ft_m_putchar('%', count);
    return(count);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;
    
    count = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
            ft_printf_helper(args, &format, &count);
        else
        {
            write(1, format, 1);
            format++;
            count++;
        }
    }
    va_end(args);
    return (count);
}


#include <stdio.h>

int main(void)
{
    int resultado;
    
    resultado = ft_printf("hello123%c56%s%%b%iabc", 'a', "Hola", 4561652);
    printf("\n%i", resultado);
    return (0);
}

/*
Here are the requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

Because ft_putnbr() and ft_putstr() aren’t enough

You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

malloc, free, write,
va_start, va_arg, va_copy, va_end
*/