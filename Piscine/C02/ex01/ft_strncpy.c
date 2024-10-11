/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:56:33 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:16:35 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
void	ft_putstr(char *str)
{	
	while(*str)
		write(1, str++, 1);
}

int main(void)
{
	char	src[] = "Hello, my name is Arturo.";
	char	dest[40] = "";
	char	adest[] = "";
	unsigned int n;

	n = 40;
	
	ft_putstr("Actual function: ");
	strncpy(adest, src, n);
	ft_putstr(adest);
	ft_putstr("Before: ");
	ft_putstr(src);
	ft_strncpy(dest, src, n);
	ft_putstr("After: ");
	ft_putstr(dest);
	return (0);
}
*/
