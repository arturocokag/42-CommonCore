/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:28:06 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/20 17:14:02 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	dest[6] = "";
	char	src[6] = "Hello";
	char	adest[6] = "";
	
	ft_putstr("Actual function = ");
	strcpy(adest, src);
	ft_putstr(adest);
	ft_putstr("\n");
	ft_putstr("char src = ");
	ft_putstr(src);
	ft_strcpy(dest, src);
	ft_putstr("\n");
	ft_putstr("char dest = ");
	ft_putstr(dest);
	return (0);

}
*/
