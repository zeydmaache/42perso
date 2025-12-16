/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:26:07 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/14 21:29:23 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main(void)
{
	int res;
	res = ft_strlen("test");
	printf("%d", res);
	return(0);
} */