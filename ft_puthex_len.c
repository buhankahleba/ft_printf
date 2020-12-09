/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwoodwri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:04:09 by hwoodwri          #+#    #+#             */
/*   Updated: 2020/12/09 16:52:53 by hwoodwri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex_len(unsigned long nb, t_struct *l)
{
	char c;

	if (!nb)
		return ;
	ft_puthex_len(nb / 16, l);
	nb %= 16;
	if (nb < 10)
	{
		c = nb + '0';
		ft_putchar_len(c, l);
	}
	else if (9 < nb && nb < 16)
	{	
		c = nb + 87;
		ft_putchar_len(c, l);
	}
}
