/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:03:36 by aomman            #+#    #+#             */
/*   Updated: 2021/11/15 20:01:24 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*_b;
	size_t			i;

	_b = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		_b[i] = c;
		i++;
	}
	return (b);
}
