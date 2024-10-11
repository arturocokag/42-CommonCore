/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:48:48 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:21:12 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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

int main(int argc, char *argv[1])
{
	if (argc == 2)
	{
		if (ft_str_is_uppercase(argv[1]) == 1)
			{
			ft_putstr("ENTERED STRING IS UPPERCASE.");
			}
		else
			{
			ft_putstr("Entered string is not uppercase :( ");
			}
	}	
	return (0);
}
*/
