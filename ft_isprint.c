/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:18:30 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 09:23:30 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("SPACE: %d\n", ft_isprint(' '));
	printf("\\n: %d\n", ft_isprint('\n'));
	printf("a: %d\n", ft_isprint('a'));
	printf("\\0: %d\n", ft_isprint('\0'));
	printf("127: %d\n", ft_isprint(127));
	return (0);
}
*/
