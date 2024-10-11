/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:26:44 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/12 16:35:45 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	digits[5];

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			digits[0] = (n1 / 10) + '0';
			digits[1] = (n1 % 10) + '0';
			digits[2] = ' ';
			digits[3] = (n2 / 10) + '0';
			digits[4] = (n2 % 10) + '0';
			write(1, digits, 5);
			if (n1 != 98 || n2 != 99)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
