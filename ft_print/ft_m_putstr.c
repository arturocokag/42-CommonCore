/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:01 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/18 20:27:27 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_m_putstr(char *s, const char **format, int *count)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
		(*count)++;
	}
	(*format)++;
	return (*count);
}
