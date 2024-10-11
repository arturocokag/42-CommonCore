/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:17:54 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/08 14:59:38 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_print_reverse_alphabet.c
#include <unistd.h>
//Function to display the alphabet in reverse.
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write (1, &letter, 1);
		letter--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
