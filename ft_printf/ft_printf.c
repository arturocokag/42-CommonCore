/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:53:42 by acoka-re          #+#    #+#             */
/*   Updated: 2024/10/28 21:21:57 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_printf_helper(va_list args, const char **format, int *count)
{
	(*format)++;
	if (**format == 'c')
		ft_m_putchar((char)va_arg(args, int), format, count);
	else if (**format == 's')
		ft_m_putstr(va_arg(args, char *), format, count);
	else if (**format == 'p')
		ft_putptr(va_arg(args, void *), format, count);
	else if (**format == 'd' || **format == 'i')
		ft_m_putnbr(va_arg(args, int), format, count);
	else if (**format == 'u')
		ft_putunsdecimal((unsigned int)va_arg(args, unsigned int), format,
			count);
	else if (**format == 'x' || **format == 'X')
		ft_puthex((unsigned int)va_arg(args, unsigned int), format, count);
	else if (**format == '%')
		ft_m_putchar('%', format, count);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			ft_printf_helper(args, &format, &len);
		else
		{
			if (ft_m_putchar(*format, &format, &len) == -1)
				return (-1);
		}
	}
	va_end(args);
	return (len);
}
#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

static void passt_da_des_eh(int a, int b)
{
	if (a == b)
		printf("\e[38;2;0;255;0mPASST\e[0m\n\n");
	else
		printf("\e[38;2;255;0;0mPASST NET: %d != %d\e[0m\n\n", a, b);
}

int main(void)
{
	char *format;
	char *string;
	char character;
	int num;
	int lft;
	int lorig;
	// ft_printf(format, 1, 2, 3);

	// PAUL TESTS

	puts("=== Character: %c ===");
	format = "%c\n";
	character = 'A';
	lft = ft_printf(format, character);
	lorig = printf(format, character);
	passt_da_des_eh(lft, lorig);
	character = 'B';
	lft = ft_printf(format, character);
	lorig = printf(format, character);
	passt_da_des_eh(lft, lorig);

	puts("=== String: %s ===");
	format = "%s\n";
	string = NULL;
	lft = ft_printf(format, string);
	lorig = printf(format, string);
	passt_da_des_eh(lft, lorig);
	string = "Hello I am a String";
	lft = ft_printf(format, string);
	lorig = printf(format, string);
	passt_da_des_eh(lft, lorig);

	puts("\n=== Integer: %d ===");
	format = "%d\n";
	num = 0;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = 42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = -42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = 2147483647;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = -2147483648;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);

	puts("\n=== Hexa lower-Cased: %x ===");
	format = "%x\n";
	num = 0;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = 42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = -42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = 2147483647;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = -2147483648;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);

	puts("\n=== Hexa UPPER-CASED: %X ===");
	format = "%X\n";
	num = 0;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = 42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = -42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = 2147483647;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	num = -2147483648;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);

	puts("\n=== Multiple-Options (%d%s%X) ===");
	format = "%d%s%X\n";
	string = ": ";
	num = 0;
	lft = ft_printf(format, num, string, num);
	lorig = printf(format, num, string, num);
	passt_da_des_eh(lft, lorig);
	num = 42;
	lft = ft_printf(format, num, string, num);
	lorig = printf(format, num, string, num);
	passt_da_des_eh(lft, lorig);
	num = -42;
	lft = ft_printf(format, num, string, num);
	lorig = printf(format, num, string, num);
	passt_da_des_eh(lft, lorig);
	num = 2147483647;
	lft = ft_printf(format, num, string, num);
	lorig = printf(format, num, string, num);
	passt_da_des_eh(lft, lorig);
	num = -2147483648;
	lft = ft_printf(format, num, string, num);
	lorig = printf(format, num, string, num);
	passt_da_des_eh(lft, lorig);

	puts("\n=== Percent: %% ===");
	format = "%%\n";
	lft = ft_printf(format);
	lorig = printf("%%\n");
	passt_da_des_eh(lft, lorig);

	puts("\n=== Pointer: %p ===");
	format = "%p\n";
	string = NULL;
	lft = ft_printf(format, string);
	lorig = printf(format, string);
	passt_da_des_eh(lft, lorig);
	string = "Im a pointer";
	lft = ft_printf(format, string);
	lorig = printf(format, string);
	passt_da_des_eh(lft, lorig);
	puts("\n=== Not supported Option and normal text: %y ===");
	format = "Im not supported %y\n";
	lft = ft_printf(format, string);
	lorig = printf(format, string);
	passt_da_des_eh(lft, lorig);
	puts("\n=== Custom Tests ===");
	format = "%d%d\n";
	num = 42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	format = NULL;
	num = 42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	format = "%c %s %p %d %i %u %x %X %%\n";
	num = 42;
	char c = '4';
	string = "printf";
	lft = ft_printf(format, c, string, string, num, num, num, num, num);
	lorig = printf(format, c, string, string, num, num, num, num, num);
	passt_da_des_eh(lft, lorig);

	puts("\n === Check max Pointer ===");
	format = "%p\n";
	lft = ft_printf(format, 18446744073709551615ULL);
	lorig = printf(format, 18446744073709551615ULL);
	passt_da_des_eh(lft, lorig);

	// GREX TESTS

	printf("   single %%:\n");
	lft = ft_printf("'   %");
	printf("|\n");
	lorig = printf("'   %");
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	lft = ft_printf(" %c,%c,%c,%s", '0', 0, '1', "Hello");
	printf("|\n");
	lorig = printf(" %c,%c,%c,%s", '0', 0, '1', "Hello");
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	ft_printf("char test \n");
	lft = ft_printf(" %c,%c,%c,", '0', 22, '1');
	printf("|\n");
	lorig = printf(" %c,%c,%c,", '0', 22, '1');
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	ft_printf("char test 8\n");
	lft = ft_printf("%c,%c,%c,", '2', '1', 0);
	printf("|\n");
	lorig = printf("%c,%c,%c,", '2', '1', 0);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	ft_printf("char test 9\n");
	lft = ft_printf("%c,%c,%c,", 0, '1', '2');
	printf("|\n");
	lorig = printf("%c,%c,%c,", 0, '1', '2');
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	ft_printf("str test 10\n");
	lft = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("|\n");
	lorig = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(" %s", "äöü~!\"§$%&()=ß²³{[]}@<|>éÈê°\0asd");
	printf("|\n");
	lorig = printf(" %s", "äöü~!\"§$%&()=ß²³{[]}@<|>éÈê°\0asd");
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	ft_printf("nullpointer p test 9\n");
	lft = ft_printf(" %p %p ", 0, 0);
	printf("|\n");
	lorig = printf(" %p %p ", 0, 0);
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	ft_printf("mix test\n");
	lft = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
	printf("|\n");
	lorig = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	printf("test flag skip\n");
	lft = ft_printf(" % c", '0');
	printf("|\n");
	lorig = printf(" % c", '0');
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	printf("NULL test:\n");
	lft = ft_printf(NULL);
	printf("|\n");
	lorig = printf(NULL);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(NULL, 42);
	printf("|\n");
	lorig = printf(NULL, 42);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(NULL);
	printf("|\n");
	lorig = printf(NULL);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(" %w%", "hello");
	printf("|\n");
	lorig = printf(" %w%", "hello");
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	puts("test arg failures");
	char *bla = "%d%d\n";
	printf("strlen bla: %zu\n", strlen(bla));
	format = "%d%d\n";
	num = 42;
	lft = ft_printf(format, num);
	lorig = printf(format, num);
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(bla, num);
	lorig = printf(bla, num);
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(format, 42);
	lorig = printf(format, 42);
	passt_da_des_eh(lft, lorig);
	lft = ft_printf(bla, 42);
	lorig = printf(bla, 42);
	passt_da_des_eh(lft, lorig);

	lft = ft_printf("int %d, %d\n", 42);
	printf("|\n");
	lorig = printf("int %d, %d\n", 42);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	lft = ft_printf("%d%d\n", 42);
	printf("|\n");
	lorig = printf("%d%d\n", 42);
	printf("|\n");
	passt_da_des_eh(lft, lorig);
	int foo = 42;
	lft = ft_printf("%d%d\n", foo);
	printf("|\n");
	lorig = printf("%d%d\n", foo);
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	lft = ft_printf(bla, foo);
	printf("|\n");
	lorig = printf(bla, foo);
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	lft = ft_printf("%w%w%d", 42);
	printf("|\n");
	lorig = printf("%w%w%d", 42);
	printf("|\n");
	passt_da_des_eh(lft, lorig);

	/*for (int i = 0; i <= 256; i++)
		ft_printf("%s\n", i + 256);*/
}
/*
int	main(void)
{
	int	resultado;
	int	x;

	x = 42;
	resultado = ft_printf("abc123%c123%s%%.%d%iabc%u%X%p\n", 'a', "Holasss",
			-42, 123, 1, 16, &x);
	printf("\n%i\n", resultado);
	resultado = printf("abc123%c123%s%%.%d%iabc%u%X%p\n", 'a', "Holasss", -42,
			123, 1, 16, &x);
	printf("\n%i", resultado);
	return (0);
}
*/

/*
Here are the requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

Because	ft_putnbr(void) and ft_putstr() aren’t enough

You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

malloc, free, write,
va_start, va_arg, va_copy, va_end
*/