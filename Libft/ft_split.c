/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:28:05 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/04 16:30:11 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*add_substring(const char **s, char c);

static char	**add_substring_and_check(char ***newam, const char **s, char c,
		size_t *i)
{
	size_t	j;

	(*newam)[*i] = add_substring(s, c);
	if (!(*newam)[*i])
	{
		j = 0;
		while (j < *i)
		{
			free((*newam)[j]);
			j++;
		}
		free(*newam);
		return (NULL);
	}
	(*i)++;
	return (*newam);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

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

static size_t	count_substrings(char const *s, char c)
{
	size_t	count;
	int		in_substring;

	in_substring = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!in_substring)
			{
				count++;
				in_substring = 1;
			}
		}
		else
			in_substring = 0;
		s++;
	}
	return (count);
}

static char	*add_substring(const char **s, char c)
{
	const char	*start = *s;
	size_t		length;
	char		*substring;

	length = 0;
	while (**s && **s != c)
	{
		length++;
		(*s)++;
	}
	substring = (char *)malloc((length + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_strncpy(substring, start, length);
	substring[length] = '\0';
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	size_t	substring_count;
	char	**newam;
	size_t	i;

	i = 0;
	substring_count = count_substrings(s, c);
	newam = (char **)malloc((substring_count + 1) * sizeof(char *));
	if (!newam)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!add_substring_and_check(&newam, &s, c, &i))
				return (NULL);
		}
		else
			s++;
	}
	newam[i] = NULL;
	return (newam);
}
