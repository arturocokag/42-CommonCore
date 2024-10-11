/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:26:36 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:22:25 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z') \
		&& !(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
void	ft_putstr(char *str1)
{
	while (*str1)
		write(1, str1++, 1);
}

int	main(int argc, char *argv[1])
{
	if (argc == 2)
	{
		if (ft_str_is_alpha(argv[1]) == 1) 
		{
		ft_putstr("Only alphabetical characters.");
		}
		else
		{
		ft_putstr("Other than alphabetical characters.");
		}
	}
	return (0);
}
*/
