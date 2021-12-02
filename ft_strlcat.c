/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:31:26 by aomman            #+#    #+#             */
/*   Updated: 2021/11/12 20:20:17 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"libft.h"
#include<string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (!n)
		return (ft_strlen(src));
	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	j = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && j + 1 < n)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(src + i));
}
