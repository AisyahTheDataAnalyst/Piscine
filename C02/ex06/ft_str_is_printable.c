/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is-printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:18:06 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 14:11:46 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	p;

	p = 0;
	if (str[p] == '\0')
		return (1);
	while (str[p] != '\0')
	{
		if (!(str[p] > 31 && str[p] < 127))
			return (0);
		p++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "";
	char	str2[] = " ";
	char	str3[] = "	";
	char	str4[] = "Hello ";
	char	str5[] = "Hello123";
	char	str6[] = "123";
	printf("%s %d\n", str1, ft_str_is_printable(str1));
	printf("%s %d\n", str2, ft_str_is_printable(str2));
	printf("%s %d\n", str3, ft_str_is_printable(str3));
	printf("%s %d\n", str4, ft_str_is_printable(str4));
	printf("%s %d\n", str5, ft_str_is_printable(str5));
	printf("%s %d\n", str6, ft_str_is_printable(str6));
	return (0);
}
*/
