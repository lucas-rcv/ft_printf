/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaroma <lucaroma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:40:24 by lucaroma          #+#    #+#             */
/*   Updated: 2026/10/28 09:09:23 by lucaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_set_format(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (c == 's')
		count += ft_print_string(va_arg(ap, char *));
	else if (c == 'i' || c == 'd')
		count += ft_print_number(va_arg(ap, int));
	else if (c == 'x')
		count += ft_print_hex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (c == 'p')
		count += ft_print_pointer(va_arg(ap, void *));
	else if (c == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				i++;
				count += ft_set_format(format[i], ap);
			}
		}
		else
			count += write(1, &(format[i]), 1);
		i++;
	}
	va_end(ap);
	return (count);
}

//#include <stdio.h>

//int main(void)
//{
//	int a;
//	a = 5234554;

//	printf("%d\n", printf(NULL));
//	ft_printf("%d\n", ft_printf(NULL));
//	return 0;
//}

//int	ft_printf(const char *format, ...)
//{
//	va_list	ap;
//	int		i;
//	int		count;

//	va_start(ap, format);
//	i = 0;
//	count = 0;
//	while (format && format[i])
//	{
//		if (format[i] == '%')
//		{
//			i++;
//			if (format[i])
//				count += ft_set_format(format[i], ap);
//		}
//		else
//		{
//			count += write(1, &format[i], 1);
//		}
//		i++;
//	}
//	va_end(ap);
//	return (count);
//}

//int	ft_printf(const char *format, ...)
//{
//	va_list	ap;
//	int		i;
//	int		count;

//	va_start(ap, format);
//	i = 0;
//	count = 0;
//	while (format && format[i])
//	{
//		if (format[i] != '%')
//		{
//			write(1, &(format[i]), 1);
//			count++;
//			i++;
//		}
//		else if (format[i] == '%' && format[i + 1])
//		{
//			i++;
//			count += ft_set_format(format[i], ap);
//		}
//		i++;
//	}
//	va_end(ap);
//	return (count);
//}

// ft_printf("%d\n", ft_printf("INT_MAX"));
// printf("%d\n", printf("INT_MAX"));
