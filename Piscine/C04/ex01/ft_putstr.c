/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:27:17 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 16:35:05 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
*/
