/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:03:08 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/04 16:28:06 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*newam;

	if ((nmemb == 0) || (size == 0))
		return (malloc(0));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	newam = (char *)malloc(size * nmemb);
	if (newam == NULL)
		return (NULL);
	ft_bzero(newam, (size * nmemb));
	return (newam);
}
