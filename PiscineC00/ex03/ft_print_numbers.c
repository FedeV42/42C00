/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:06:17 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/20 15:15:58 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numeros;

	numeros = 48;
	while (numeros < 58)
	{
		write(1, &numeros, 1);
		numeros++;
	}
}
