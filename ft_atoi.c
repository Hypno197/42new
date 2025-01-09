/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:18:42 by lbarreca          #+#    #+#             */
/*   Updated: 2025/01/08 17:25:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_isspace(char str)
{
	if (str == ' ' || str == '\n' || str == '\f')
		return (1);
	else if (str == '\v' || str == '\t' || str == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	r;
	int	i;

	sign = 1;
	i = 0;
	r = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * sign);
}
/*
int	main(void)
{
	printf("Real atoi: %d\n", atoi("21474836472"));
	printf("My atoi: %d\n", ft_atoi("21474836472"));
	return (0);
}
*/