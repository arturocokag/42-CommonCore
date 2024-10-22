/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:09 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/22 21:25:31 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_puthex(unsigned long n, const char **format, int *count)
{
    char	*hex_base;
	
	hex_base = "0123456789abcdef";
	if (**format == 'X')
		hex_base = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex((n / 16), format, count);
	if (write(1, &hex_base[n % 16], 1) != -1)
		(*count)++;
	if (**format == 'x' || **format == 'X')
		(*format)++;
	return(*count);
}