/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:28:38 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/28 21:15:59 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Aditional for ft_printf:
# include <inttypes.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_m_putchar(char c, const char **format, int *count);
int		ft_m_putnbr(int n, const char **format, int *count);
int		ft_m_putstr(char *s, const char **format, int *count);
int		ft_putunsdecimal(unsigned int n, const char **format, int *count);
int		ft_puthex(unsigned long n, const char **format, int *count);
int		ft_putptr(void *ptr, const char **format, int *count);

#endif