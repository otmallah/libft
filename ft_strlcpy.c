/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:47:17 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/02 11:47:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (maxlen != 0)
	{
		while (src[i] && i < (maxlen - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

// int main(void)
// {
//     char src[]="salam";
//     char dest[]="bok";

//     size_t a;
//     a = ft_strlcpy(dest , src , 3);
//     printf("%zu" , a);
//     printf("%s" , dest);
// }