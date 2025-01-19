/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:07:08 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 12:16:15 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] < 91 && str[l] > 64)
		{
			str[l] = str[l] + 32;
		}
		l++;
	}
	return (str);
}
/*

#include <stdio.h>
   
int	main(void)
{
	char	str[] = "OH MY GOD!";

	printf("%s", str);
	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}
*/
