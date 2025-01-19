/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:33:37 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/15 10:52:00 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char	word1[] = "Maybe";
	char	word2[] = "Maybe not";
	char	word3[] = "May";
	char	word4[] = "Nah";
	char	word5[] = "Maybe";

	printf("Comparing %s and %s : %d\n", word1, word2, ft_strcmp(word1, word2));
	printf("Comparing %s and %s : %d\n", word1, word3, ft_strcmp(word1, word3));
	printf("Comparing %s and %s : %d\n", word1, word4, ft_strcmp(word1, word4));
	printf("Comparing %s and %s : %d\n", word1, word5, ft_strcmp(word1, word5));
}
*/
