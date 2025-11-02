/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:59:29 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/27 10:13:24 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dlen;
    unsigned int slen;
    unsigned int i;

    /* compute lengths */
    dlen = 0;
    while (dlen < size && dest[dlen] != '\0')
        dlen++;
    slen = 0;
    while (src[slen] != '\0')
        slen++;

    /* if no space to append, return size + src length */
    if (dlen == size)
        return (size + slen);

    /* append up to size - dlen - 1 chars */
    i = 0;
    while (src[i] != '\0' && dlen + i + 1 < size)
    {
        dest[dlen + i] = src[i];
        i++;
    }
    dest[dlen + i] = '\0';

    return (dlen + slen);
}

/* int	main(void)
{
	char *str = "Try to find this part of the text";
	char *to_find = "this";

	printf("Returned: %s\n", ft_strstr(str, to_find));
} */