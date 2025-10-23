/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:29:00 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/19 15:36:18 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 2;
// 	ft_div_mod(&div, &mod, a, b);
// 	printf("my result : %d", &div);
// 	printf("my result : %d", &mod);
// 	return (0);
// }
