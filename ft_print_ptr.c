/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:01:34 by ntardy            #+#    #+#             */
/*   Updated: 2022/06/01 19:17:39 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *arg, char format)
{
	if (format == 's')
		return (ft_putstr_pf((char *)arg));
	else if (arg == 0)
		return (ft_putstr_pf("(nil)"));
	else
		return (ft_putstr_pf("0x")
			+ ft_putnbr_base_unsign((unsigned long long)arg, "0123456789abcdef",
				0));
}
