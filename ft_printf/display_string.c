/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:26:45 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:31:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_string(const char *in, int i, int c_count, char *str, va_list a)
{
	if (in[i + 1] == 's')
	{
		str = (char *)va_args(a, (char *));
		ft_putstr(str);
		c_count += ft_putstr(str);
	}
	else
		return ;
}
