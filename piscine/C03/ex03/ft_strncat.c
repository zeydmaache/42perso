/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:08:32 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/27 08:46:45 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	i;
	unsigned	j;

	i = 0;
	j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}
 
/* int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";
	int	n = 2;

	ft_strncat(dest, src, n);
	printf("%s", dest);
} */