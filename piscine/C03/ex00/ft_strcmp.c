/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:26:18 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/28 08:26:28 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
/* int	main(void)
{
	char	*s1 = "hello";
	char	*s2 = "hello";

	printf("%d\n", ft_strcmp(s1, s2));
}
 */