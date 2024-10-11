/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:04:23 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/02 12:31:08 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newam;
	size_t	i;

	if (!s || !f)
	{
		return (NULL);
	}
	newam = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newam)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		newam[i] = f(i, s[i]);
		i++;
	}
	newam[i] = '\0';
	return (newam);
}
