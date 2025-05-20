/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:56:24 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 17:13:35 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n - 1 && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>

void	run_test(const char *test, const char *s1, const char *s2, size_t n)
{
	printf("%s\n", test);
	int	n1 = memcmp(s1, s2, n);
	int	n2 = ft_memcmp(s1, s2, n);
	if (n1 == n2)
		printf("Test passed!\n\n");
	else
		printf("Test failed\n\n");
}

int	main(void)
{
	run_test("Test 1: empty string", "", "", 0);
	run_test("Test 1a: empty string (n beyond len)", "", "", 3);
	run_test("Test 2: same string", "ABC", "ABC", 3);
	run_test("Test 3: diff string", "ABCD", "ABZD", 3);
	run_test("Test 3a: diff string (n < len)", "ABCD", "ABZD", 2);
	run_test("Test 3b: diff string (n = 0)", "ABC", "ABZ", 0);
	return (0);
}
*/
