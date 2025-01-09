/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:01:03 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 11:01:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;

    while (dst[dst_len] != '\0' && dst_len < size)
        dst_len++;
    while (src[src_len] != '\0')
        src_len++;
    if (size <= dst_len)
        return size + src_len;
    while (src[i] != '\0' && (dst_len + i + 1) < size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    if (dst_len + i < size)
        dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	while (size > 1 && src[i] != '\0' || size >)
	{
		dst[j + i] = src[i];
		size--;
		i++;
	}
	dst[j + i] = '\0';
	while (src[i] != '\0')
		i++;
	return (j + i);
}
*/

/*
void	test(int size) {
	char dst[] = "this is ";
	char src[] = "concatenated correctly";
	int len = strlen(dst) +  strlen(src);
	int r =ft_strlcat(dst, src, size);

	printf("Source: '%s', size: %d, dst: '%s', len: %d, result: %d\n",
			dst, size, src, len, r);
}

int	main(void) {
	test(30);
	test(15);
	test(40);
	test(0);
	return (0);
}

{
	int i;
	int dstlen;

	i = 0;
	dstlen = 0;
	while(dst[dstlen])
		dstlen++;
	while(size - dstlen > 1 && src[i] && dst[i])
	{
		dst[i+dstlen] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	while(src[i])
		i++;
	return ((size_t)i);
	//return (size_t)(i * sizeof(char));
}*/