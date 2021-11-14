/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:55:07 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/03 11:55:08 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (((char *)s)[i])
	{
		res[j] = (*f)(i, ((char *)s)[i]);
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

// int main(void)
// {
//     char s[]="salamm";
//      char *res;
//      res = ft_strmapi(s,ft_upp);
//      printf("%s" , res);
// }
// char ft_upp(unsigned int i  , char c)
// {
//     printf("%c index %d\n" , c , i);
//     return c - 32;
// }