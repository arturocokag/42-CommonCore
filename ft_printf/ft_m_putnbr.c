/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:32:58 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/29 18:30:36 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_nlen(long n)
{
	int length;

	length = 0; 
	if (n == 0)
		return (1);
	if (n  0)
		return (0);
	while (n != 0)
	{
		n = n/10;
		length++;
	}
	return (length);
}
int	ft_m_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_m_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (ft_nlen(n));
}
