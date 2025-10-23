/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:59:25 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/19 15:36:12 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("result is %d\n", &a);
// 	printf("remainder is %d\n", &b);
// 	return (0);
// }
