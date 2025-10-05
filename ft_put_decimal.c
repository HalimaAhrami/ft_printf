/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h-el-ahr <h-el-ahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:13:55 by h-el-ahr          #+#    #+#             */
/*   Updated: 2024/12/04 19:14:33 by h-el-ahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_decimal(int nbr)
{
	long	n;
	int		l;

	l = 0;
	n = nbr;
	if (n < 0)
	{
		n = -n;
		l += ft_putchar('-');
	}
	if (n >= 10)
		l += ft_put_decimal(n / 10);
	l += ft_putchar(n % 10 + '0');
	return (l);
}
