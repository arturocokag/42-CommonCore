/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:04:14 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:31:03 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;
	size_t	j;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = dest_length;
	j = 0;
	if (size <= dest_length)
		return (size + src_length);
	while ((src[j] != '\0') && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_length + dest_length);
}
