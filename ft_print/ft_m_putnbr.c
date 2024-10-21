/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:32:58 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/21 16:57:49 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_m_putnbr(int n, const char **format, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*format)++;
		return (*count += 11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		n = -n;
	}
	if (n > 9)
		ft_m_putnbr(n / 10, format, count);
	c = (n % 10) + '0';
	write(1, &c, 1);
	(*count)++;
	if (**format == 'i' || **format == 'd')
		(*format)++;
	return (*count);
}
