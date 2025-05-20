/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:13:44 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 15:23:39 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

void	run_test(char *test, int c)
{
	printf("%s\n", test);
	int	c1 = toupper(c);
	int	c2 = ft_toupper(c);
	if (c1 == c2)
		printf("Test passed!\n");
	else
		printf("Test failed!\n");
	printf("Expected: %c\n", c1);
	printf("Actual: %c\n\n", c2);
}

int	main(void)
{
	run_test("Test 1: lowercase", 'a');
	run_test("Test 2: uppercase", 'X');
	run_test("Test 3: EOF", -1);
	run_test("Test 4: 255", 255);
	run_test("Test 5: 0", 0);
	return (0);
}
*/
