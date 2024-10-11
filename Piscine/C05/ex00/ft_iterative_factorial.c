/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:17:29 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/26 19:33:06 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	t;

	t = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (t != 1)
	{
		nb = nb * (t - 1);
		t--;
	}
	return (nb);
}
/*
void	ft_putposnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putposnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int n;

	n = 1;
	ft_putposnbr(ft_iterative_factorial(n));

	return (0);
}
*/
