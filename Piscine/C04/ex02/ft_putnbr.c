/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:37:22 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 18:23:01 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
/*
void	ft_putstr(char *str)
{
	while(*str)
		write (1, str++, 1);
}

int main(void)
{
	ft_putnbr(-1);
	ft_putstr("\n");
	ft_putnbr(0);
	ft_putstr("\n");
	ft_putnbr(1);
	ft_putstr("\n");
	ft_putnbr(-123456);
	ft_putstr("\n");
	ft_putnbr(123456);
	ft_putstr("\n");
	ft_putnbr(-2147483648);
	ft_putstr("\n");
	ft_putnbr(2147483647);
	ft_putstr("\n");	
}
*/
