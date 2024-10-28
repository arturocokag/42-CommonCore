/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:19 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/28 20:41:42 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, const char **format, int *count)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	if (ptr == NULL)
	{
		if (write(1, "(nil)", 5) != -1)
		{
			(*format)++;
			*count += 5;
		}
		return (*count);
	}
	(*format)++;
	if (write(1, "0x", 2) != -1)
		*count += 2;
	else
		return (-1);
	ft_puthex(address, format, count);
	return (*count);
}
