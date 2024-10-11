/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:56:57 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/25 18:40:53 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_str_array(char *tab[], int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_array(char *tab[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_rev_str_array(argv + 1, argc - 1);
	ft_print_array(argv + 1, argc - 1);
	return (0);
}
