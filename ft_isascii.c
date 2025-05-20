/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:02:14 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 09:09:56 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\\0: %d\n", ft_isascii('\0'));
	printf("DEL: %d\n", ft_isascii(127));
	printf("-1: %d\n", ft_isascii(-1));
	printf("128: %d\n", ft_isascii(128));
	return (0);
}
*/
