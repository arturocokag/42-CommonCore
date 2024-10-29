/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:01 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/29 18:08:27 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	ft_m_putstr(char *s)
{
	size_t	length;
	
	if (s == '\0')
		return (ft_putstr("(null)"));
	length = ft_strlen(s);
	return ((write(1, s, length)));
}
