/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:33:01 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/15 16:14:50 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

/* #include <stdio.h>
int	main(void)
{
	char src[] = "bonjour";
	int	i;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	
	char dest[i];
	ft_strcpy(dest, src);
	printf( "%s",dest);
} */