/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:38:56 by aimokhta          #+#    #+#             */
/*   Updated: 2024/10/16 13:08:35 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
int main(void)
{
	ft_putnbr(1234);  // Output: 1234
	ft_putchar('\n');
	ft_putnbr(-5678); // Output: -5678
	ft_putchar('\n');
	ft_putnbr(-2147483648); // Output: -2147483648
	ft_putchar('\n');
	return (0);
}*/
