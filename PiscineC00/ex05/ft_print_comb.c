/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:30:50 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/21 19:09:36 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	bucles(char x, char y, char z)
{
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != '7' || y != '8' || z != '9')
				{
					write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
}
