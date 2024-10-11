/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:03:31 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:30:37 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;

	ptrs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return (ptrs + i);
		i++;
	}
	return (NULL);
}
