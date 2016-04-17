/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 00:07:11 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/08 02:54:58 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		isNumericChar(char x)
{
	return (x >= '0' && x <= '9');
}

int		ft_atoi(char *str)
{
	int		res;
	int		sign;
	int		i;

	i = 0;
	res = 0;
	sign = 1;
	if (str == '\0')
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (isNumericChar(str[i]) == 0)
			break;
		res = res * 10 + str[i] - '0';
		++i;
	}
		return (sign * res);
}

int		main(void)
{
	int		val;
	char	str[20] = {""};

	val = atoi(str);

	printf("%d\n%d", ft_atoi(str), val);

	return (0);
}
