/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:10 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/13 12:15:34 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if (str[u] >= 97 && str[u] <= 122)
		{
			str[u] = str[u] - 32;
		}
		u++;
	}
	return (str);
}
/*

#include <stdio.h>
 
int	main(void)
{
	char	str[] = "Howdy partner";
		
	printf("%s", str);
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
*/
