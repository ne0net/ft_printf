/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:50:44 by nfranzgr          #+#    #+#             */
/*   Updated: 2023/01/05 15:36:43 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*new_string;

	len = ft_strlen(s1);
	new_string = (char *)malloc((len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy(new_string, s1, len + 1);
	return (new_string);
}
/*
int main(void)
{
	char word1[20] = "hola";
	char * word2;

	word2 = ft_strdup(word1);
	printf("%s", word2);
}*/