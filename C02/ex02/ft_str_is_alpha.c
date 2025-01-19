/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:14:27 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 12:10:38 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "Hello";
	char	str4[] = "Hello123";

	printf("%s %d\n", str1, ft_str_is_alpha(str1));
	printf("%s %d\n", str2, ft_str_is_alpha(str2));
	printf("%s %d\n", str3, ft_str_is_alpha(str3));
	printf("%s %d\n", str4, ft_str_is_alpha(str4));
	return (0);
}
*/
