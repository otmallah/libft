/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:25:49 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 15:25:54 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	n;
	char	*dest1;
	char	*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	n = 0;
	if (dest1 < src1)
		ft_memcpy(dest1, src1, size);
	else if (dest1 > src1)
	{
		while (size > 0)
		{
			dest1[size -1] = src1[size -1];
			size--;
		}
	}
	return (dest1);
}
