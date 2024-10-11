/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:49:05 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/04 16:34:47 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip(char const *s, char const *set)
{
	int	i;
	int	j;
	int	found;

	found = 0;
	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == s[j])
		{
			j++;
			found = 1;
		}
		else
			i++;
		if (found == 1)
		{
			found = 0;
			i = 0;
		}
	}
	return (j);
}

static int	ft_r_skip(char const *s, char const *set, int len)
{
	int	i;
	int	j;
	int	found;

	found = 0;
	i = 0;
	j = len - 1;
	while (set[i])
	{
		if (set[i] == s[j])
		{
			j--;
			found = 1;
		}
		else
			i++;
		if (found == 1)
		{
			found = 0;
			i = 0;
		}
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		in_skip;
	int		fin_skip;
	char	*newam;
	int		i;
	int		length;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	length = ft_strlen(s1);
	in_skip = ft_skip(s1, set);
	fin_skip = ft_r_skip(s1, set, length);
	if (fin_skip < in_skip)
		return (ft_strdup(""));
	newam = (char *)malloc((fin_skip - in_skip + 2) * sizeof(char));
	if (!newam)
		return (NULL);
	while (in_skip <= fin_skip)
	{
		newam[i] = s1[in_skip];
		i++;
		in_skip++;
	}
	newam[i] = '\0';
	return (newam);
}
