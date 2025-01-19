/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:41:54 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 12:09:49 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src [i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*

#include <stdio.h>

int	main(void)
{
	char	src[] = "Living is wonderful:)";
	char	dest[50];
	int 	n = 6;
	ft_strncpy(dest, src, n);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
}
*/
