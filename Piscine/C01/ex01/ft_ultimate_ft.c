/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:54:07 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/10 12:09:26 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
void	ft_putnbr(int n)
{
	char c;
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
int main(void)
{
	int value;

	value = 0;
	int *ptr1 = &value;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	ft_putstr("Before: ");
	ft_putnbr(value);
	ft_putstr("\n");
	ft_ultimate_ft(ptr9);
	ft_putstr("After: ");
	ft_putnbr(value);
	ft_putstr("\n");
	return(0);
}
*/
