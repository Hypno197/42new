/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:59:53 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 15:13:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>
 #include <stddef.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    char *s;
    size_t i;

    i = 0;
    if(nmemb > 0 && size > 0 && nmemb * size <= 2147483647)
    {
    s = malloc(nmemb*size);
    while(i < nmemb * size)
    {
        s[i] = 0;
        i++;
    }
    return (void*)s;
    }
    return NULL;
}
/*
int main()
{
    ft_calloc(8, 8);
    return 0;
}
*/
