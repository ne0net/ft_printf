/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:25:46 by nfranzgr          #+#    #+#             */
/*   Updated: 2023/01/12 16:05:39 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (dstsize)
	{
		while (i < srcsize && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		if (dstsize > srcsize)
			dst[srcsize] = 0;
		else
			dst[dstsize - 1] = 0;
	}
	return (srcsize);
}
