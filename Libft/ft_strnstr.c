/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:04:29 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:31:11 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lilc;

	i = 0;
	if (!*little)
		return ((char *)(big));
	while (big[i])
	{
		lilc = 0;
		while ((big[i] == little[lilc]) && (big[i]) && (i < len))
		{
			i++;
			lilc++;
		}
		if (little[lilc] == '\0')
			return ((char *)&big[i - lilc]);
		i = (i - lilc) + 1;
	}
	return (NULL);
}
