/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorvan <vmorvan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:04:02 by vmorvan           #+#    #+#             */
/*   Updated: 2016/11/10 17:13:40 by vmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t cx;

	cx = 0;
	if (s && f)
	{
		while (s[cx] != '\0')
		{
			f(cx, s + cx);
			cx++;
		}
	}
}
