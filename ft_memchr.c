/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:19:41 by aomman            #+#    #+#             */
/*   Updated: 2021/11/18 17:04:17 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*_s;
	size_t	i;

	i = 0;
	_s = (char *)s;
	while (i < n)
	{
		if (_s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}
