/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:10:21 by diana             #+#    #+#             */
/*   Updated: 2024/11/07 15:22:53 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main ()
{
	ft_printf("print a caracter:%c\n", 'a');
	ft_printf("print a string:%s\n", "hola diana");
	ft_printf("print a decimal number:%d\n", 123);
	ft_printf("print a decimal integer:%i\n", -42);
	ft_printf("print a unsigned decimal number:%u\n", 42);
	ft_printf("print a hexadecimal number lower case:%x\n", 1234);
	ft_printf("print a hexadecimal number upper case:%X\n", 1234);
	ft_printf("print a pointer:%p\n", 1234);
	ft_printf("print a doble percentaje:%%\n");
	ft_printf("bon%%jour\n");
	ft_printf("Hello\vWorld!\n");
	ft_printf("he%%cllo\n");
}