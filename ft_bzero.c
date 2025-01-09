/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:59:43 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 10:59:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char	*str;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = 0;
		n--;
		i++;
	}
}
/*
int	main(void)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
	// Fill 8 characters starting from str[13] with '.'
	ft_bzero(str + 13, 8*sizeof(char));
	printf("After memset():  %s", str);
	return (0);
}
*/
