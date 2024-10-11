/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:08:46 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/13 13:07:26 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
void	ft_putstr(char *str)
{
		while (*str)
			write (1, str++, 1);
}
void 	ft_putnbr(int n)
{
		char	c;

		if (n > 9)
			ft_putnbr(n / 10);
		c = (n % 10) + '0';
		write (1, &c, 1);
}
int	main(void)
{
	int test1;
	int test2;

	test1 = 82;
	test2 = 9;

	ft_putstr("Your dividend is: ");
	ft_putnbr(test1);
	ft_putstr("Your divisor is: ");
	ft_putnbr(test2);
	ft_ultimate_div_mod(&test1, &test2);
	ft_putstr("\nThe result is: ");
	ft_putnbr(test1);
	ft_putstr("The remainder is: ");
	ft_putnbr(test2);
	ft_putstr("\n");
	return (0);
}
*/
