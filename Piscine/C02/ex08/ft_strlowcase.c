/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:19:35 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:27:06 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
void	ft_putstr(char *str1)
{
	while (*str1)
		write(1, str1++, 1);
}
int	main(int argc, char *argv[1])
{
	char *result;

	if (argc == 2)
	{
		result = ft_strlowcase(argv[1]);
		ft_putstr(result);
	}
	return (0);
}
*/
