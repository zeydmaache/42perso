/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:25:10 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/30 12:08:51 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* 
#include <stdio.h>
int    main(void)
25	{
26	    printf("Square Root of 0: %d\n", ft_sqrt(0));
27	    printf("Square Root of -2: %d\n", ft_sqrt(-2));
28	    printf("Square Root of 4: %d\n", ft_sqrt(4));
29	    printf("Square Root of 10: %d\n", ft_sqrt(10));
30	    printf("Square Root of 25: %d\n", ft_sqrt(25));
31	} */