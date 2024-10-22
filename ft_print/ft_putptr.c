/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:19 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/22 21:24:17 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putptr(void *ptr, const char **format, int *count)
{
    unsigned long address;

    address = (unsigned long)ptr;
    if (**format == 'p')
        (*format)++;
    if (write(1, "0x", 2) != -1)
        *count += 2;
    else
        return (-1);
    ft_puthex(address, format, count);
    return (*count);
}