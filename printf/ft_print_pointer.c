/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaroma <lucaroma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:42:49 by lucaroma          #+#    #+#             */
/*   Updated: 2026/10/21 22:53:54 by lucaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	res;
	int				count;

	count = 0;
	res = (unsigned long)ptr;
	if (!res)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	count += write (1, "0x", 2);
	count += ft_print_hex(res, "0123456789abcdef");
	return (count);
}
