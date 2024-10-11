/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:01:47 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/23 18:48:40 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		++i;
	}
	return (s1[i] - s2[i]);
}
/*
void ft_putstr(char *str)
{
	while(*str)
		write (1, str++, 1);
}
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello and Hello";
	int	result;

	if (strcmp(s1, s2) == 0)
		ft_putstr("Real function (0): Strings are equal.\n");
	else if (strcmp(s1, s2) < 0)
		ft_putstr("Real function (< 0): String s1 is less than String s2.\n");
	else if (strcmp(s1, s2) > 0)
		ft_putstr("Real function (> 0): String s1 is greater than String s2.\n");
	result = ft_strcmp(s1, s2);
	if (result == 0)
		ft_putstr("Made function (0): Strings are equal.\n");
	else if (result < 0)
		ft_putstr("Made function (< 0): String s1 is less than String s2.\n");
	else if (result > 0)
		ft_putstr("Made function (> 0): String s1 is greater than String s2.\n");

	return (0);
}
*/
