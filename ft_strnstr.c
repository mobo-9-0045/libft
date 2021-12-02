/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:21:56 by aomman            #+#    #+#             */
/*   Updated: 2021/11/18 21:33:24 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == 0)
		return ((char *) big);
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		while (little[j] && (little[j] == big[i + j]) && i + j < n)
		{
			if (little [j + 1] == '\0')
			{
				return ((char *) big + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
