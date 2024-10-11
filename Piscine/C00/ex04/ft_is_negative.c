/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:36:51 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/06 12:43:48 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_is_negative.c
#include <unistd.h>
//Function to display 'N' or 'P' depending on the interger sign as parameter
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	return (0);
}
*/
