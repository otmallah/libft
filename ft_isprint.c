/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:23:52 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 11:23:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (SUCCESS);
	return (FAIL);
}

// int main(void)
// {
//     if (ft_isprint('*') == SUCCUSS)
//         printf("ah");
//     else
//         printf("la");
// }