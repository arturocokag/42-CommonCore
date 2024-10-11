/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:23:45 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/10 20:22:16 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 56;
	b = 7;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	ft_putstr("Results: div = ");
	ft_putnbr(div);
	ft_putstr(", mod = ");
	ft_putnbr(mod);
	ft_putstr("\n");
	return (0);
}
*/
