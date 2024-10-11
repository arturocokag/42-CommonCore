/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:26:00 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:21:25 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
int main(int argc, char *argv[1])
{	
	if (argc == 2)
	{
		if (ft_str_is_lowercase(argv[1]) == 1)
		{
		ft_putstr("Entered string only contains lowercase.");
		}	
		else
		{
		ft_putstr("Entered string contains other than lowercase.");
		}
	}
	return (0);
}
*/
