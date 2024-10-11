/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:04:37 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:31:16 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newam;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		newam = (char *)malloc(1);
		if (newam)
			newam[0] = '\0';
		return (newam);
	}
	if (len == SIZE_MAX || len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	newam = (char *)malloc((len + 1) * sizeof(char));
	if (newam == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newam[i] = s[start + i];
		i++;
	}
	newam[i] = '\0';
	return (newam);
}
