/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h-el-ahr <h-el-ahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:27:40 by h-el-ahr          #+#    #+#             */
/*   Updated: 2024/11/12 18:04:35 by h-el-ahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_typ(char type, va_list *valu)
{
	int	l;

	l = 0;
	if (type == 'c')
		l += ft_putchar((char)va_arg(*valu, int));
	if (type == 's')
		l += ft_putstr((char *)va_arg(*valu, char *));
	else if (type == 'p')
		l += ft_putp((unsigned long long)va_arg(*valu, void *));
	else if (type == 'd' || type == 'i')
		l += ft_put_decimal(va_arg(*valu, int));
	else if (type == 'u')
		l += ft_put_u(va_arg(*valu, unsigned int));
	else if (type == 'x')
		l += ft_put_hexa(va_arg(*valu, unsigned));
	else if (type == 'X')
		l += ft_putuphexa(va_arg(*valu, unsigned int));
	else if (type == '%')
		l += ft_putchar('%');
	return (l);
}
