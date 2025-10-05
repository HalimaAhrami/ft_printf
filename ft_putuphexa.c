/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftputuphexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h-el-ahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:14:26 by h-el-ahr          #+#    #+#             */
/*   Updated: 2024/11/12 18:14:29 by h-el-ahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphexa(unsigned int nbr)
{
	char	*s;
	int		l;

	s = "0123456789ABCDEF";
	l = 0;
	if (nbr >= 16)
		l += ft_putuphexa(nbr / 16);
	l += ft_putchar(s[nbr % 16]);
	return (l);
}
