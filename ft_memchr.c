/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:09:14 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 16:16:29 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

void	run_test(const char *test, const char *s, int c, size_t n)
{
	printf("%s\n", test);
	char *s1 = memchr(s, c, n);
	char *s2 = ft_memchr(s, c, n);
	if (!s1 && !s2)
		printf("Test passed! Both NULL!\n\n");
	else if (s1 && s2)
	{
		if (strcmp(s1, s2) == 0)
			printf("Test passed!\n\n");
		else
			printf("Test failed\n\n");
	}
	else
		printf("Test failed! Only one NULL\n\n");
}

int	main(void)
{
	run_test("Test 1: c in string (n == len)", "42KL", 'K', 4);
	run_test("Test 1a: c in string (n < len)", "42KL", 'K', 3);
	run_test("Test 2: c not in string", "42KL", '0', 4);
	return (0);
}
*/
