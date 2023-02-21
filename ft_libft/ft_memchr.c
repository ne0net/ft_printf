/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:14:44 by nfranzgr          #+#    #+#             */
/*   Updated: 2022/12/27 20:19:52 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_aux;

	s_aux = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((char)c == s_aux[i])
			return ((void *)s_aux + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char word[] = "hola";
	printf("%s", ft_memchr(word, 'o', 999));
}*/