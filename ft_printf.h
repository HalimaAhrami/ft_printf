/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h-el-ahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:16:05 by h-el-ahr          #+#    #+#             */
/*   Updated: 2024/11/12 18:16:07 by h-el-ahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_put_decimal(int nbr);
int		ft_put_hexa(unsigned int nbr);
int		ft_putuphexa(unsigned int nbr);
int		ft_put_it(char c);
int		ft_put_u(unsigned int nbr);
int		ft_putstr(char *s);
int		ft_typ(char type, va_list *valu);
int		ft_hexap(unsigned long long p);
int		ft_putp(unsigned long long p);

#endif
