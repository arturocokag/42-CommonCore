/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:12:16 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/27 11:38:25 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	times;

	times = power;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (times > 1)
	{
		res = res * nb;
		times--;
	}
	return (res);
}
/*
void ft_putnbr(int n)
{
	char	c;
	
	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(void)
{
	int nb;
	int power;

	nb = -2;
	power = 3;

	ft_putnbr(ft_iterative_power(nb, power));
	return (0);
}
*/
