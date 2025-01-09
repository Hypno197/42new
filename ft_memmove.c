/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:48:56 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 11:48:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d1;
	const char	*s1;
	int			i;

	d1 = dest;
	s1 = src;
	i = 0;
	while (n > 0)
	{
		d1[i] = s1[i];
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[] = "Ge\0eks"; // Array of size 100
	char str2[] = "Quiz"; // Array of size 5
	puts("str1 before memmove ");
	puts(str1);
	ft_memmove(str1, str2, sizeof(str2));
	puts("\nstr1 after memmove ");
	puts(str1);
	return (0);
}
*/