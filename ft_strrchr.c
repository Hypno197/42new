/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:01:30 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 11:01:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(char *str, char c)
{
	char	*s;

	s = NULL;
	while (str)
	{
		if (*str == c)
			s = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (s);
}
