/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:48:42 by akok              #+#    #+#             */
/*   Updated: 2025/05/20 07:28:12 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}
/*
#include <stdio.h>
void	run_test(char *test, size_t nmemb, size_t size)
{
	printf("%s\n", test);
	void *mem1 = calloc(nmemb, size);
	void *mem2 = ft_calloc(nmemb, size);
	if (!mem1 && !mem2)
		printf("Test passed! Both returned NULL!\n\n");
	else if (mem1 && mem2)
	{
		if (memcmp(mem1, mem2, nmemb * size) == 0)
			printf("Test passed!\n\n");
		else
			printf("Test failed! Memory contents differ!\n\n");
	}
	else
		printf("Test failed! Only one returned NULL!\n\n");
	free(mem1);
	free(mem2);
}

int	main(void)
{
	run_test("Test 1: char", 5, sizeof(char));
	run_test("Test 2: int", 5, sizeof(int));
	run_test("Test 3: nmemb == 0", 0, 5);
	run_test("Test 4: size == 0", 5, 0);
	run_test("Test 5: both 0", 0, 0);
	run_test("Test 6: overflow", (size_t)-1, 16);
	run_test("Test 7: overflow", 16, (size_t)-1);
	run_test("Test 8: large allocation (safe)", 1024 * 1024, sizeof(char));
	run_test("Test 9: single byte", 1, 1);
	return (0);
}
*/
