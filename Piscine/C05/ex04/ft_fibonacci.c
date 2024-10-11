/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:02:59 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/27 15:26:58 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 14;
	ft_putnbr(ft_fibonacci(i));
	return (0);
}
*/
