/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:04:05 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:30:56 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptrsdup;
	size_t	i;

	ptrsdup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ptrsdup == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptrsdup[i] = s[i];
		i++;
	}
	ptrsdup[i] = '\0';
	return (ptrsdup);
}
