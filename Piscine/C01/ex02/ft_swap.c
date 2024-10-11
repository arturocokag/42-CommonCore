/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:05:17 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/10 13:35:01 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
void	ft_putnbr(int n)
{
	char	c;
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);	
}
int main(void)
{
	int x;
	int y;

	x = 42;
	y = 15;

	ft_putstr("Before Swap: x = ");
	ft_putnbr(x);
	ft_putstr(", y = ");
	ft_putnbr(y);
	ft_putstr("\n");
	ft_swap(&x , &y);
	ft_putstr("After Swap: x = ");
	ft_putnbr(x);
	ft_putstr(", y = ");
	ft_putnbr(y);
	ft_putstr("\n");
	return(0);
}
*/
