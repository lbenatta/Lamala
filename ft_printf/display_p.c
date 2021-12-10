/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:36:45 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:29:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_p(const char *in, int i, int char_count, int x, va_list args)
{
	if (in[i + 1] == 'p')
	{
		x = (int)va_args(args, (void *));
		ft_put_p(x);
		char_count += ft_put_p(x);
	}
	else
		return ;
}
