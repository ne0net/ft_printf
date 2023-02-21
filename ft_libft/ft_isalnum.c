/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:08:49 by nfranzgr          #+#    #+#             */
/*   Updated: 2023/01/10 18:59:41 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("\n%d is true", ft_isalnum(33));
	printf("\n%d is false", ft_isalnum(32));
	printf("\n%d is true", ft_isalnum(127));
	printf("\n%d is false", ft_isalnum(128));

}*/