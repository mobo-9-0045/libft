/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:17:14 by aomman            #+#    #+#             */
/*   Updated: 2021/11/19 00:13:38 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*s;
	int		i;	

	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		s[i] = str[i];
		i--;
	}
	return (s);
}
