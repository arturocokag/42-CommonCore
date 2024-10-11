/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:04:11 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:31:01 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newam;
	size_t	total_length;
	size_t	i;
	size_t	j;

	total_length = ft_strlen(s1) + ft_strlen(s2);
	newam = (char *)malloc((total_length + 1) * sizeof(char));
	if (newam == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while ((i < total_length) && (s1[j] != '\0'))
	{
		newam[i++] = s1[j++];
	}
	j = 0;
	while ((i < total_length) && (s2[j] != '\0'))
	{
		newam[i++] = s2[j++];
	}
	newam[i] = '\0';
	return (newam);
}
