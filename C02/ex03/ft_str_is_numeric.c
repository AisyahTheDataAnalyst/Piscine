/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:54:53 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 12:11:22 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int 	main(void)
{
	char	str1[] = "";
	char	str2[] = "HELLO";
	char	str3[] = "hello";
	char	str4[] = "Hello";
	char	str5[] = "Hello123";
	char	str6[] = "123";

	printf("%s %d\n", str1, ft_str_is_numeric(str1));
	printf("%s %d\n", str2, ft_str_is_numeric(str2));
	printf("%s %d\n", str3, ft_str_is_numeric(str3));
	printf("%s %d\n", str4, ft_str_is_numeric(str4));
	printf("%s %d\n", str5, ft_str_is_numeric(str5));
	printf("%s %d\n", str6, ft_str_is_numeric(str6));
	return (0);
}
*/
