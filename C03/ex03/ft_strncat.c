/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:24:08 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/15 13:07:18 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest [i] = src[j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	dest[50] = "Hi, My name is ";
	char	src[] = "Aisyah Mokhtar";
	unsigned int nb = 6;

	ft_strncat(dest, src, nb);
	printf("After ft_strncat : %s\n", dest);
	return(0);
}*/
