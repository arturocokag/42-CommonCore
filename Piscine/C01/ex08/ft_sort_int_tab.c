/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:28:27 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/13 13:12:50 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_print_array(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	n;

	n = 0;
	while (n < size - 1)
	{
		i = 0;
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			i++;
			j++;
		}
		n++;
	}
}
/*
void	ft_putnbr(int n)
{
	char c;
	while (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
void	ft_print_array(int *tab, int size)
{
	int i;
	
	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		if (i < size - 1)
		{
			ft_putstr(", ");
		}
		i++;
	}
	ft_putstr("\n");
}

int	main (void)
{
	int arr[] = {5, 3, 8, 2, 7, 1};
	int size;

	size = 6;
	ft_putstr("Original Array: ");
	ft_print_array(arr, size);
	ft_sort_int_tab(arr, size);
	ft_putstr("Sorted Array: ");
	ft_print_array(arr, size);
	return (0);
}
*/
