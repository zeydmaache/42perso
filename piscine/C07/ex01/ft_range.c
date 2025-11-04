/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:53:14 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/04 09:15:17 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*chaine;
	int	i;

	i = 0;
	chaine = (int *) malloc(sizeof(int) * ((max - min)));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		chaine[i] = min;
		i++;
		min++;
	}
	return (chaine);
}
