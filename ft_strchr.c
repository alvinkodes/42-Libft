/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:38:43 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 15:49:23 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

void	run_test(const char *test, const char *s, int c)
{
	printf("%s\n", test);
	char *s1 = strchr(s, c);
	char *s2 = ft_strchr(s, c);
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
	run_test("Test 1: c in string", "42KL", 'K');
	run_test("Test 2: c not	in string", "42KL", '0');
	return (0);
}
*/
