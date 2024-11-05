/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:38:47 by diana             #+#    #+#             */
/*   Updated: 2024/10/30 17:25:47 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long long nb);
int	ft_puthexa(unsigned int nb, char format);
int	ft_put_u(unsigned int nb);
int	ft_putptr(uintptr_t nb);

#endif