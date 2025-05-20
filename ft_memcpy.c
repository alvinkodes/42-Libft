/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:28:41 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 10:39:11 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src && n)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

void	run_test(char *des, void const *src, size_t n)
{
	printf("%s\n", des);
	char buf1[100]; char buf2[100];
	memset(buf1, 0, 100); memset(buf2, 0, 100);
	memcpy(buf1, src, n); ft_memcpy(buf2, src, n);
	if (memcmp(buf1, buf2, n) == 0)
		printf("Test passed!\n");
	else
		printf("Test failed!\n");
	printf("Expected: %s\n", buf1);
	printf("Actual: %s\n\n", buf2);
}

int	main(void)
{
	char s1[] = "42KL";
	run_test("Test 1: Basic string (n == strlen)", s1, sizeof(s1));
	run_test("Test 1a: Basic string (n == 0)", s1, 0); 
	run_test("Test 1b: partial string (n == 3)", s1, 3); 

	char s2[] = "";
	run_test("Test 2: Empty string (n == 0)", s2, 0);

	char s3[] = "Hello";
	run_test("Test 3: n > string len", s3, 10);
	return (0);
}
*/
