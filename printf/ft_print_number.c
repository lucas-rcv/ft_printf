/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaroma <lucaroma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:13:35 by lucaroma          #+#    #+#             */
/*   Updated: 2026/10/21 23:13:00 by lucaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(long n)
{
	int		count;
	char	c;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_print_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
