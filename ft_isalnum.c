/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:42:34 by akok              #+#    #+#             */
/*   Updated: 2025/05/19 11:36:06 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c)
		|| ft_isdigit(c));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("a: %d\n", ft_isalnum('a'));	
	printf("9: %d\n", ft_isalnum('9'));	
	printf("Z: %d\n", ft_isalnum('Z'));	
	printf("0: %d\n", ft_isalnum('0'));	
	printf("&: %d\n", ft_isalnum('&'));	
	return (0);
}
*/
