/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsdecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:16 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/18 20:27:59 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsdecimal(unsigned int n, const char **format, int *count)
{
	char	c;

	if (n > 9)
		ft_putunsdecimal(n / 10, format, count);
	c = (n % 10) + '0';
	write(1, &c, 1);
	(*count)++;
	if (**format == 'u')
		(*format)++;
	return (*count);
}
