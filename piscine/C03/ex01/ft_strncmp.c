/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:54:32 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/25 23:09:05 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0'){
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/* int	main()
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	int	n;

	n = 3;

	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
} */