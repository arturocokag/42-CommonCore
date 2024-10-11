/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:49:38 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/13 12:14:33 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	print_array(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
void	ft_put_nbr(int n)
{
	char	c;

	while (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_array(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		if (i < size - 1)
			ft_putstr(", ");
	}
	i++;
	ft_putstr("\n");
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6};
	int	size;

	size = 6;
	ft_putstr("Original Array: ");
	print_array(arr, size);
	ft_rev_int_tab(arr, size);
	ft_putstr("Reversed Array: ");
	print_array(arr, size);
	return (0);
}
*/
