/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:22:09 by jye               #+#    #+#             */
/*   Updated: 2016/11/18 17:23:45 by jye              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, unsigned char c)
{
	const char *h;

	h = s;
	s += ft_strlen(s);
	while (s != h && *s != c)
		--s;
	return (*s == c ? (char *)s : NULL);
}
