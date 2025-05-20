/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:23:43 by akok              #+#    #+#             */
/*   Updated: 2025/05/20 06:23:51 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;

	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (!(*nptr >= '0' && *nptr <= '9'))
		return (0);
	nb = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = (nb * 10) + *nptr - '0';
		nptr++;
	}
	return (sign * nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
void	run_test(const char *des, const char *nptr)
{
	printf("%s\n", des);
	int	n1 = atoi(nptr);
	int	n2 = ft_atoi(nptr);
	if (n1 == n2)
		printf("Test passed!\n");
	else
		printf("Test failed!\n");
	printf("Expected: %d\nActual: %d\n\n", n1, n2);
}

int	main(void)
{
	run_test("Test 1: 42", "42");
	run_test("Test 2: -42", "-42");
	run_test("Test 3: 0", "0");
	run_test("Test 4: INT MIN", "-2147483648");
	run_test("Test 5: INT MIN - 1", "-2147483649");
	run_test("Test 6: INT_MAX", "2147483647");
	run_test("Test 7: INT_MAX + 1", "2147483648");
	run_test("Test 8: Empty", "");
	run_test("Test 9: Multiple newline characters", " \n  \t 42   ");
	run_test("Test 10: Multiple sign", "++42");
	run_test("Test 10a: Multiple sign", "+-42");
	run_test("Test 10b: Multiple sign", "--42");
	run_test("Test 11: whitespace only", "     ");
	return (0);
}
*/
