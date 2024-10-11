/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:49:54 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 21:58:47 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
	return (0);
}
