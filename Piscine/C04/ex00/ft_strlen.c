/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:13:30 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/24 14:44:49 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
void	ft_putnbr(int n)
{	
	char	c;

	if (n == -2147483648)
		{
			write (1, "-", 1);
			write (1, "2", 1);
			n = 147483648;
		}
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

void	ft_putstr(char *str)
{
	while(*str)
		write (1, str++, 1);
}

int main(int argc, char *argv[])
{	
	int	result;

	if (argc == 2)
	{
		result = ft_strlen(argv[1]);
		ft_putstr("The length of the string is:\n");
		ft_putnbr(result);
		ft_putstr("\n");
	}
	return (0);
}
*/
