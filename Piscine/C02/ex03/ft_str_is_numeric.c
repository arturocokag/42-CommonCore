/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:07:37 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:22:11 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	while(*str1)
		write(1, str1++, 1);
}

int	main(int argc, char *argv[1])
{
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]) == 1)
		{
			ft_putstr("Entered string is numeric.");
		}
		else
		{
			ft_putstr("Entered string is not numeric.");
		}
	}
	return (0);
}
*/
