/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:00:56 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 15:23:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	char	*d;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	d = malloc((i + 1) * sizeof(char));
	while (s[j] != '\0' && j < i)
	{
		d[j] = s[j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
/*
int	main(void)
{
	return (0);
}
*/
