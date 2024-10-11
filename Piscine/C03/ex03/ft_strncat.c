/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:05:49 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 12:20:13 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(void)
{
	char src[] = "Goodbyesss";
	char dest[50] = "Hello and ";
	unsigned int n;
	char	*result;

	n = 7;
	result = ft_strncat(dest, src, n);
	ft_putstr(result);
	ft_putstr("\n");
	return (0);
}
*/
