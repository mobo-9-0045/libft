/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:53:30 by aomman            #+#    #+#             */
/*   Updated: 2021/11/23 05:02:26 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
		return (dest);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

int	main(void)
{
	char	target[21] = "a 12345 54321 ok !";
	char	*p = target + 8;
	char	*a = target + 2;
	ft_memmove(a, p, 200000000000);
	printf("%s", target);
}
