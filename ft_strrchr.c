/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:53:29 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 15:58:38 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>

void	run_test(const char *test, const char *s, int c)
{
	printf("%s\n", test);
	char *s1 = strrchr(s, c);
	char *s2 = ft_strrchr(s, c);
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
	run_test("Test 1: c in string", "42KL42KL", 'K');
	run_test("Test 2: c not	in string", "42KL", '0');
	return (0);
}
*/
