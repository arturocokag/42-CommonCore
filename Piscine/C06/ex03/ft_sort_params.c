/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:03:07 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/25 20:15:52 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char *tab[], int size)
{
	int		i;
	int		j;
	char	*tmp;
	int		nb;

	nb = 0;
	while (nb < size - 1)
	{
		i = 0;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab [j] = tmp;
			}
			i++;
			j++;
		}
		nb++;
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
	ft_sort_params(argv + 1, argc - 1);
	ft_print_array(argv + 1, argc - 1);
	return (0);
}
