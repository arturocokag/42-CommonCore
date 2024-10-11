/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:24:48 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 21:06:54 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;
	int	negative_count;

	nb = 0;
	sign = 1;
	negative_count = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' \
	|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative_count++;
		str++;
	}
	if (negative_count % 2 != 0)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (sign * nb);
}
/*
void ft_putnbr(int nb)
{
	char	c;
	
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 2)
	{
		result = ft_atoi(argv[1]);
		ft_putnbr(result);
	}
	return (0);
}
*/
