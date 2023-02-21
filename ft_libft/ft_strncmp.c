/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:45:54 by nfranzgr          #+#    #+#             */
/*   Updated: 2022/12/27 20:13:31 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (diff == 0) && (i < n))
	{
		diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if ((diff == 0) && (i < n))
		diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (diff);
}
/*

int main(void)
{
	char word1[] = "holaaa";
	char word2[] = "holaa";
	printf("%d", ft_strncmp(word1, word2, 4));
}*/