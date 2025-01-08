/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:48:28 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 11:48:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;
    int i;

    i = 0;
    str = s;
    while(n > 0)
    {
        if(str[i] == c)
            return (void *)(&str[i]);
        i++;
        n--;
    }
    return NULL;
}
/*
int main()
{
    char arr[] = { 'b', 'a', 'd', 'e', 'f', 'A', 'g' };
 
    // checking the presence of 'g'
    char* pc = (char*)ft_memchr(arr, 'W', sizeof arr);
    if (pc != NULL)
        printf("found");
    else        
        printf("not found");
}
*/
