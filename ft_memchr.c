/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 05:17:51 by wyu               #+#    #+#             */
/*   Updated: 2021/12/27 11:32:41 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chcmp(unsigned char c1, unsigned char c2)
{
	return ((int)(c1 - c2));
}

void	*ft_memchr(const void *s, int c, size_t count)
{
	unsigned char	*s_unc;
	unsigned char	c_unc;
	size_t			i;

	s_unc = (unsigned char *)s;
	c_unc = (unsigned char)c;
	i = 0;
	while (s_unc[i] && i < count)
	{
		if (!ft_chcmp(s_unc[i], c_unc))
			return ((void *)(s_unc + i));
		i++;
	}
	if (!c_unc && !s_unc[i])
		return ((void *)(s_unc + i));
	return ((void *) NULL);
}
