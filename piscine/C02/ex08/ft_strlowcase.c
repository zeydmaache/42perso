/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:18:38 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/26 15:07:52 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i];
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/* int main(void)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ft_strlowcase(str);
	printf("%s\n", str);

} */