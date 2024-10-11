/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:36:27 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/06 12:25:50 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_print_numbers.c
#include <unistd.h>
//Function to display all digits from 0 to 9
void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		write (1, &digit, 1);
		digit++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
