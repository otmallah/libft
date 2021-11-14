/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:32:44 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 10:38:30 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (SUCCESS);
	return (FAIL);
}

// int main(void)
// {
// 	int i;

// 	if (ft_isalpha('5') == SUCCUSS)
//         printf("is algha");
// }
