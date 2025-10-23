/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:16:11 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/17 09:52:53 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a = 20;
	int	b = 6;

	printf("Before ft_swap :\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("after ft_swap :\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
