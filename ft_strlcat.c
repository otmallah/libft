/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:08:31 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/05 15:08:32 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	a;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	a = len_dest;
	if (a >= size)
		return (len_src + size);
	while (src[i] && (len_dest < (size - 1)))
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (a + len_src);
}
