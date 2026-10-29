/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaroma <lucaroma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:12:57 by lucaroma          #+#    #+#             */
/*   Updated: 2026/10/20 16:30:48 by lucaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *x)
{
	int	z;

	if (!x)
		x = "(null)";
	z = 0;
	while (x[z])
	{
		write (1, &x[z], 1);
		z++;
	}
	return (z);
}
