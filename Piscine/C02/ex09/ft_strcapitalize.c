/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoka-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:56:38 by acoka-re          #+#    #+#             */
/*   Updated: 2024/06/22 21:33:15 by acoka-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str [i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] >= 'a' && str[i + 1] <= 'z') \
		&& ((str[i] <= 47 || str[i] >= 123) \
		|| (str[i] >= 91 && str[i] <= 96) \
		|| (str[i] >= 58 && str[i] <= 64)) \
		&& (!(str[i] >= '1' && str[i] <= '9')))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
/*
void	ft_putstr(char *str1)
{
	while (*str1)
		write (1, str1++, 1);
}

int	main(int argc, char *argv[1])
{
	char *result;

	if (argc == 2)
	{
	result = ft_strcapitalize(argv[1]);
	ft_putstr(result);	
	}
	return (0);
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototype
char *ft_strcapitalize(char *str);

// Helper function to print the results
void print_result(char *original) {
    // Create a copy of the original string
    char *copy = strdup(original);
    if (copy == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return;
    }
    // Call the function on the copy
    ft_strcapitalize(copy);
    // Print the original and capitalized versions
    printf("Original: '%s'\nCapitalized: '%s'\n\n", original, copy);
    // Free the allocated memory
    free(copy);
}

// Main function
int main() {
    char str1[] = "";
    char str2[] = "!!! --- _";
    char str3[] = "hElLo, WoRlD! how ArE YoU?";
    char str4[] = "123abc 45def! 67gh? 89ij.";
    char str5[] = "hello   world  this is    a test";
    char str6[] = "hello!world?test_case:example-string";
    char str7[] = "héllo wörld";
    char str8[] = "hello!!--__++world";
    char str11[] = "  hello world  ";
    char str12[] = "\thello\tworld\nthis\nis\ta\ttest";
    char str13[] = "hello,world;this:is-a_test";
    char str14[] = "a b c d e f g h i j";
    char str15[] = "héllo wørld öf cödé";
    char str16[] = "hello\0world";
    char str17[] = "HELLO WORLD THIS IS A TEST";
    char str18[] = "hello world this is a test";
    char str19[] = "helloworld";
    char str20[] = "123abcABC456defDEF";
    char str21[] = "mother-in-law well-being";
    char str22[] = "it's a test string";
    char str23[] = "!@#$%^&*()_+=-{}[]:\";'<>?,./";
    char str24[] = "thisisaverylongwordthatshouldbecapitalizedcorrectly";
    char str25[] = "привет мир";
    char str26[] = "\"hello\" 'world'";
    char str27[] = "hello 'world' \"this\" is a test";
    char str28[] = "hello\\world\nnew\\line";
    char str29[] = "hello...world";
    char str30[] = "[hello] {world} (this) <is> [a] test";

    // Testing all the strings
    print_result(str1);
    print_result(str2);
    print_result(str3);
    print_result(str4);
    print_result(str5);
    print_result(str6);
    print_result(str7);
    print_result(str8);
    print_result(str11);
    print_result(str12);
    print_result(str13);
    print_result(str14);
    print_result(str15);
    print_result(str16);
    print_result(str17);
    print_result(str18);
    print_result(str19);
    print_result(str20);
    print_result(str21);
    print_result(str22);
    print_result(str23);
    print_result(str24);
    print_result(str25);
    print_result(str26);
    print_result(str27);
    print_result(str28);
    print_result(str29);
    print_result(str30);

    return 0;
}
*/
