/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:42:33 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/10 21:25:29 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
/*
int	main(void)
{
	ft_putstr("Hello");
	ft_putstr("\n");
	ft_putstr("This is a test");
	ft_putstr("\n");
	ft_putstr("Fuck you");
	return (0);
}
*/
