/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaroma <lucaroma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:14:20 by lucaroma          #+#    #+#             */
/*   Updated: 2026/10/21 22:44:49 by lucaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, base);
	count += write(1, &base[n % 16], 1);
	return (count);
}
