/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:47:44 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/16 13:43:39 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char test1[] = "Slower\n";
	char test2[] = "Slowly\n";

	printf("Comparing 4 letters: %d\n", ft_strncmp(test1, test2, 4));
	printf("Comparing 5 letters: %d\n", ft_strncmp(test1, test2, 5));
	return(0);
}
