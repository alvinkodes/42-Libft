/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:56:10 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 11:38:19 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src && n)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s && d < s + n)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

void test(const char *label, char *input, size_t d_off, size_t s_off, size_t n)
{
    char *s1 = strdup(input);
    char *s2 = strdup(input);

    memmove(s1 + d_off, s1 + s_off, n);
    ft_memmove(s2 + d_off, s2 + s_off, n);
    if (memcmp(s1, s2, n) == 0)
        printf("[PASS] %s\n", label);
    else {
        printf("[FAIL] %s\n", label);
        printf("  memmove:    %s\n", s1);
        printf("  ft_memmove: %s\n", s2);
    }
    printf("Expected: %s\n", s1);
    printf("Actual: %s\n\n", s2);
    free(s1);
    free(s2);
}

int main(void)
{
    test("No overlap", "LIBFT!!!", 0, 4, 4);
    test("Overlap (src < dest)", "123456789", 2, 0, 5);
    test("Overlap (dest < src)", "ABCDEFGHIJ", 0, 2, 5);
    test("src == dest", "HelloWorld", 0, 0, 10);
    test("n = 0", "TestZero", 3, 2, 0);
    test("Full move", "FullMove!", 0, 0, 9);
    test("Partial overlap", "abcde", 1, 0, 4);
    return 0;
}
*/
