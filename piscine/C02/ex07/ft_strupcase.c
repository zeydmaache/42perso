/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:27:27 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/22 11:46:47 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 126))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char str[] = "abcdefghijklmnopqrstuvwxyz";
//     ft_strupcase(str);
// 	printf("%s\n", str);
// }