/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 14:41:12 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/07 16:27:40 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	int		index;
	char	temp[1000];

	temp[0] = 0;
	index = 0;
	while (index < argc - 1)
	{
		if (ft_strcmp(argv[index], argv[index + index]) > 0)
		{
			ft_strcpy(temp, argv[index + 1]);
			ft_strcpy(argv[index + 1], argv[index]);
			ft_strcpy(argv[index], temp);
			index = 1;
		}
		else
			index++;
	}
	return (0);
}
