/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:33:09 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/21 19:21:39 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_puthexal(int n, const char **format, int *count)
{
    char    c;
    
    if (n >= 0 && n <= 9)
    {
        c = n + '0';
        return(ft_m_putchar(c, format, count));
    }
    return(0);
}
/*
int	ft_m_putchar(char c, const char **format, int *count)
{
	write(1, &c, 1);
	(*count)++;
	(*format)++;
	return (*count);
}
*/  