/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:21:32 by aomman            #+#    #+#             */
/*   Updated: 2021/11/19 01:27:49 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		string = malloc(sizeof(char));
	else if (len > ft_strlen(s))
		string = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		string = malloc(sizeof (char) * (len + 1));
	if (!string)
		return (NULL);
	while (s[i] && i < len && i + start < ft_strlen(s))
	{
		string[i] = s[start + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
