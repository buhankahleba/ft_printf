/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwoodwri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:34:47 by hwoodwri          #+#    #+#             */
/*   Updated: 2020/11/30 21:17:05 by hwoodwri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

{

}


int ft_printf(const char *format, ...)
{
	va_list arg;
	if(!format)
		return (-1);
	
	va_start(arg, format);

	va_end(arg);
}
