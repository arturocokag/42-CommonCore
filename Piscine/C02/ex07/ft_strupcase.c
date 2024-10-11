/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:01:37 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:26:32 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
void ft_putstr(char *str1)
{
	while (*str1)
		write (1, str1++, 1);
}

int main(int argc, char *argv[1])
{
	char	*result;
	
	if (argc == 2)
	{	
		result = ft_strupcase(argv[1]);
		ft_putstr(result);
	}
	return (0);
}
*/
