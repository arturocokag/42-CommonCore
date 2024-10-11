/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:51:35 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/12 12:01:07 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar.c
#include <unistd.h>
//Function to display a character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//test
/*
int	main(void)
{
	ft_putchar('A');
	return (0);
}
*/
