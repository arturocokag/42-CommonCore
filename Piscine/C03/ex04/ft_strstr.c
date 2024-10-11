/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:21:54 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 13:14:20 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main(void)
{
	char	haystack[] = "sepHgierHellbvpisufenvHellorliusbeiubg";
	char	needle[] = "Hello";
	char	*result;
	
	if (ft_strstr(haystack, needle) != 0)
	{
		result = ft_strstr(haystack, needle);
		ft_putstr(result);
	}
	return (0);
}
*/
