/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:28:25 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 20:14:27 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
void ft_putstr(char *str1)
{	
	while(*str1)
		write(1, str1++, 1);
}

int	main(int argc, char *argv[1])
{
	if (argc == 2)
	{
		if (ft_str_is_printable(argv[1]) == 1)
		{
		ft_putstr("The string is printable.");
		}
		else
		{
		ft_putstr("The string is NOT printable.");
		}
	}
	return (0);
}
*/
