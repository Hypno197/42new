/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:00:33 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 11:00:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d1;
	const unsigned char	*d2;
	int					i;

	i = 0;
	d1 = s1;
	d2 = s2;
	while (i < (int)n)
	{
		if (d1[i] != d2[i])
			return (d1[i] - d2[i]);
		i++;
	}
	return (0);
}
/*
		int main()
{
	int	comp;

	//check se compara anche dopo \0?
	// comparing two strings directly
	comp = ft_memcmp("geaksforgeeks", "geeksforgeeks", 6);
	printf("%d", comp);
	return (0);
}
*/