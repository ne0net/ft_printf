/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:51:51 by nfranzgr          #+#    #+#             */
/*   Updated: 2023/01/12 16:17:21 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			count;
	char			*cpy;

	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	cpy = (char *) malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	i = start;
	count = 0;
	while (s[i] && count < len)
	{
		cpy[count] = s[i];
		count++;
		i++;
	}
	cpy[count] = '\0';
	return (cpy);
}
