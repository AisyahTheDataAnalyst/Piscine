/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:10:11 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/16 18:41:36 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

#include <stdio.h>

int main()
{
	char	str1[] = "Hello";
	char	str2[] = "Is anybody home?";	

	printf("Number of characters in \"%s\" : %d\n", str1, ft_strlen(str1));
	printf("Number of characters in \"%s\" : %d\n", str2, ft_strlen(str2));
	return (0);
}
