/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:03:40 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:30:43 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (n == 0)
		return ((void *)ptrdest);
	if (!dest && !src)
		return (dest);
	if (&ptrdest[0] <= &ptrsrc[0])
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		ptrdest[n] = ptrsrc[n];
	return ((void *)ptrdest);
}
