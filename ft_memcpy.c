/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:57:01 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 15:57:03 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	j;

	j = 0;
	if (!dest && !src)
		return (NULL);
	if ((!dest || !src) && n == 0)
		return (dest);
	str1 = (char *)dest;
	str2 = (char *)src;
	while (j < n)
	{
		str1[j] = str2[j];
		j++;
	}
	return (dest);
}
