/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:01:00 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 12:04:17 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void ft_putstr(char *str)
{
	while(*str)
		write (1, str++, 1);
}

int	main(void)
{
	char	src[] = "my name is Arturo";
	char	dest[50] = "Hello, ";
	char	*result;

	result = ft_strcat(dest, src);
	ft_putstr(result);
	ft_putstr("\n");
	return (0);
}
*/
