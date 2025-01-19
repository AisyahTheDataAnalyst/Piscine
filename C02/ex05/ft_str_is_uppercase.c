/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:57:28 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 12:13:16 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "HELLO";
	char	str3[] = "hello";
	char	str4[] = "Hello";
	char	str5[] = "Hello123";
	char	str6[] = "123";
	printf("%s %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s %d\n", str3, ft_str_is_uppercase(str3));
	printf("%s %d\n", str4, ft_str_is_uppercase(str4));
	printf("%s %d\n", str5, ft_str_is_uppercase(str5));
	printf("%s %d\n", str6, ft_str_is_uppercase(str6));
	return (0);
}
*/
