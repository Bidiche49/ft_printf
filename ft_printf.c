/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:26:35 by ntardy            #+#    #+#             */
/*   Updated: 2022/06/03 18:03:18 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isformat(char c)
{
	int			i;
	const char	*format;

	format = "cdispxXu%";
	i = -1;
	while (format[++i])
		if (format[i] == c)
			return (1);
	return (0);
}

static int	ft_forest(const char *s, int i, va_list argument)
{
	if ((s[i] == 'c' || s[i] == 'd' || s[i] == 'i'))
		return (ft_print_int(va_arg(argument, int), s[i]));
	if ((s[i] == 's' || s[i] == 'p'))
		return (ft_print_ptr(va_arg(argument, void *), s[i]));
	if ((s[i] == 'x' || s[i] == 'X'))
		return (ft_print_hex(va_arg(argument, unsigned int), s[i]));
	if (s[i] == 'u')
		return (ft_print_unsign(va_arg(argument, unsigned)));
	if (s[i] == '%')
		return (ft_putchar_pf('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	argument;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(argument, s);
	while (s[i])
	{
		if (s[i] == '%' && (ft_isformat(s[i + 1])))
		{
			ret += ft_forest(s, i + 1, argument);
			i += 2;
		}
		if (s[i] != '\0' && s[i] != '%')
			ret += ft_putchar_pf(s[i++]);
	}
	return (ret);
}
