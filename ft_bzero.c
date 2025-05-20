/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:48:50 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 09:56:15 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

void	run_test(char *des, void *s1, void *s2, size_t n)
{
	printf("%s\n", des);
	bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n) == 0)
		printf("Test passed!\n\n");
	else
		printf("Test failed!\n\n");
}

int	main(void)
{
	char s1[] = ""; char s2[] = "";
	run_test("Test 1: empty string with n == 0", "", "", 0);

	char s3[] = "Hello"; char s4[] = "Hello";
	run_test("Test 2: basic string", s3, s4, 5);

	char s5[] = ""; char s6[] = "";
	run_test("Test 3: n > string len", s5, s6, 3);
	return (0);
}
*/
