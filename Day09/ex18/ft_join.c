/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:00:25 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 12:02:21 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_join(char **tab, char *sep)
{
	int		k;
	int		l;
	int		m;
	char	*result;

	k = 0;
	m = 0;
	result = malloc((sizeof(tab) + sizeof(sep)) * sizeof(char));
	while (tab[k][0])
	{
		l = 0;
		while (tab[k][l])
		{
			result[m] = tab[k][l];
			m++;
			l++;
		}
		l = 0;
		while (sep[l])
		{
			result[m] = sep[l];
			m++;
			l++;
		}
		k++;
	}
	free(result);
	return (result);
}
