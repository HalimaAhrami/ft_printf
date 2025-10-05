/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h-el-ahr <h-el-ahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:25:01 by h-el-ahr          #+#    #+#             */
/*   Updated: 2024/11/12 18:07:00 by h-el-ahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	args;

	len = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (*s)
	{
		if (*s != '%')
			len += ft_putchar(*s);
		else
			len += ft_typ(*++s, &args);
		s++;
	}
	va_end(args);
	return (len);
}
