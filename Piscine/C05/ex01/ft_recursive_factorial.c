/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:36:50 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/27 17:26:34 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
void	ft_putposnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putposnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int main(void)
{
	int n;

	n = 15;
	ft_putposnbr(ft_recursive_factorial(n));
	return (0);
}
*/
