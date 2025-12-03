/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:16:48 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/04 09:29:08 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*temp;
	int	i;

	i = 0;
	size = max - min;
	temp = (int *) malloc(sizeof(int) * size);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	*range = temp;
	return (size);
}

/* int	main(void)
{
	int	*tableau;
	int	taille;

	taille = ft_ultimate_range(&tableau, 2, 6);
	return (0);
} */
