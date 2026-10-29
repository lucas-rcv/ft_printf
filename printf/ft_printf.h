/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaroma <lucaroma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:08:09 by lucaroma          #+#    #+#             */
/*   Updated: 2026/10/28 08:28:32 by lucaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(int x);
int	ft_print_string(char *x);
int	ft_print_number(long n);
int	ft_print_hex(unsigned long n, char *base);
int	ft_print_unsigned(unsigned int n);
int	ft_print_pointer(void *ptr);

#endif