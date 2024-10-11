/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:29:14 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/27 17:55:53 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{	
		write (1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(void)
{
	int	nb;

	nb = 63;

	ft_putnbr(ft_sqrt(nb));
	return (0);
}
*/
