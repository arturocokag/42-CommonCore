/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:13:34 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 10:59:29 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	s1[] = "Helloo";
	char	s2[] = "Hello";
	unsigned int n;
	int	result;

	n = 5;

	if (strncmp(s1, s2, n) == 0)
		ft_putstr("Real Ft: Strings are equal until n.\n");
	else if (strncmp(s1, s2, n) < 0)
		ft_putstr("Real Ft: String s1 is less than s2 until n.\n");
	else if (strncmp(s1, s2, n) > 0)
		ft_putstr("Real Ft: String s1 is greater than s2 until n.\n");
	result = ft_strncmp(s1, s2, n);
	if (result == 0)
		ft_putstr("Made Ft: Strings are equal until n.\n");
	else if (result < 0)
		ft_putstr("Made Ft: String s1 is less than s2 until n.\n");
	else if (result > 0)
		ft_putstr("Made Ft: String s1 is greater than s2 until n.\n");
	return (0);
}
*/
