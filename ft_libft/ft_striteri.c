/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:56:37 by nfranzgr          #+#    #+#             */
/*   Updated: 2023/01/05 15:36:48 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
static void fun(unsigned int i, char *s)
{
	s[i] = 'a';
}
int main(void)
{
	void (*pfun)(unsigned int, char *);
	char str[] = "olee";
	pfun = &fun;
	ft_striteri(str, pfun);
	printf("%s", str);
}*/