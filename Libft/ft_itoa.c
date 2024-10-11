/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:03:26 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/04 16:29:00 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n);

char	*ft_itoa(int n)
{
	size_t			digits;
	char			*new_number;
	unsigned int	nbr;

	digits = get_digits(n);
	new_number = (char *)malloc((digits + 1) * sizeof(char));
	if (!new_number)
		return (NULL);
	new_number[digits] = '\0';
	if (n < 0)
	{
		new_number[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (digits-- > 0)
	{
		if (new_number[digits] == '-')
			break ;
		new_number[digits] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (new_number);
}

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	n = n / 10;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
