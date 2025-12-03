/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:13:08 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/20 08:55:09 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 20;
// 	b = 6;
// 	printf("Before ft_swap :\n");
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("after ft_swap :\n");
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);
// }
