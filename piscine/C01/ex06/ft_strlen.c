/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:30:25 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/20 15:35:26 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Bonjour la France";
// 	int len;

// 	len = ft_strlen(str);
// 	printf("stirg %s\nlen: %d\n", str, len);

// }
