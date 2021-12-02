/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:07:43 by aomman            #+#    #+#             */
/*   Updated: 2021/11/19 01:34:45 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		str_size;
	int		s1_s;
	int		s2_s;

	if (!s1 || !s2)
		return (NULL);
	s1_s = ft_strlen(s1);
	s2_s = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_s + s2_s + 1));
	if (!str)
		return (NULL);
	str_size = 0;
	while (str_size < s1_s)
	{
		str[str_size] = s1[str_size];
		str_size++;
	}
	str_size = 0;
	while (str_size < s2_s)
		str[s1_s++] = s2[str_size++];
	str[s1_s] = '\0';
	return (str);
}
