/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:41:51 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/23 16:28:10 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[dest_len] != '\0')
	{
		dest[i] = src[i];
		i++;
		dest_len++;
	}
	dest[i] = '\0';
	return dest;
}