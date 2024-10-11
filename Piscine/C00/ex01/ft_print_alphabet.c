/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:08:31 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/12 12:14:35 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_print_alphabet.c
#include <unistd.h>
//Function to display the alphabet in lowercase
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write (1, &letter, 1);
		letter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
