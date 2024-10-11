/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:53:42 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/11 21:42:29 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	**ft_m_putchar(char ***c, const char ***s, int **count)
{
	write(1, &c, 1);
    (count)++;
    (**s)++;
    return (count);
}

int *ft_printf_helper(va_list args, const char **s, int *count)
{
    (*s)++;
        if (**s == 'c')
            ft_m_putchar(va_arg(args, char ***), &s, &count);
 /*     if (*s == 's')
            ft_m_putstr(va_arg(args, char *), &s, &count);
        if (*s == 'p')
            ft_putvoid(va_arg(args, void *), &s, &count); // ???
        if (*s == 'd')
            ft_putdecimal(va_arg(args, int *), &s, &count); // What? and ???
        if (*s == 'i')
            ft_m_putnbr(va_arg(args, int *), &s, &count); // What? and ???
        if (*s == 'u')
            ft_putunsdecimal(va_arg(args, int *), &s, &count); // What? and ???
        if (*s == 'x')
            ft_puthexal(va_arg(args, int *), &s, &count); // What? and ???
        if (*s == 'X')
            ft_puthexau(va_arg(args, int *), &s, &count); // What? and ???
        if (*s == '%')
            ft_putchar(va_arg(args, char *), &s, &count); */
    return(count);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int     count;
    
    count = 0;
    va_start(args, s);
    while (*s)
    {
        if (*s == '%')
        {
            ft_printf_helper(args, &s, &count);
            count++;
        }
        else
        {
            write(1, s, 1);
            s++;
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
    
    resultado = ft_printf("hello123%c", 'a');
    printf("\n%i", resultado);
    /* printf("%i", ft_printf("123%c", 'z')); */
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