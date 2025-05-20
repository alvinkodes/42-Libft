/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:37:41 by akok              #+#    #+#             */
/*   Updated: 2025/05/20 07:53:31 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

void	run_test(char *test, const char *s)
{
	printf("%s\n", test);
	char *buf1 = strdup(s);
	char *buf2 = ft_strdup(s);
	if (!buf1 && !buf2)
		printf("Test passed! Both returned NULL!\n");
	else if (buf1 && buf2)
	{
		if (strcmp(buf1, buf2) == 0)
			printf("Test passed! Same contents!\n");
		else
			printf("Test failed! Content differs!\n");
	}
	else
		printf("Test failed! Only one returned NULL!\n");
	printf("Expected: %s\nActual: %s\n\n", buf1, buf2);
	free(buf1);
	free(buf2);
}

int	main(void)
{
	run_test("Test 1: string", "42KL!");
	run_test("Test 2: empty string", "");
	//run_test("Test 3: NULL", NULL);
	run_test("Test 4: single characters", "a");
	run_test("Test 5: long sentence", "Hello world! ABCdefGHIjklMNO");
	return (0);
}
*/
