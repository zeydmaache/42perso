/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:06:03 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/04 09:49:53 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	copy = (char *) malloc(sizeof(char) * (len +1));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
