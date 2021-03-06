/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuprun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:21:25 by bsuprun           #+#    #+#             */
/*   Updated: 2017/11/02 17:23:41 by bsuprun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int n1;

	n1 = (long int)n;
	if (n1 < 0)
	{
		ft_putchar('-');
		n1 = -n1;
	}
	if (n1 >= 10)
	{
		ft_putnbr(n1 / 10);
		ft_putchar(n1 % 10 + '0');
	}
	if (n1 < 10)
		ft_putchar(n1 % 10 + '0');
}
