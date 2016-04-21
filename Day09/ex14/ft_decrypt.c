/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 11:34:43 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 11:39:18 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_perso.h"

t_perso		**ft_decrypt(char *str)
{
	int		k;
	int		l;
	int		m;
	char	**array;

	*array = malloc(sizeof(str) * sizeof(char));
	k = 0;
	l = 0;
	m = 0;
	while (str[k])
	{
		if (str[k] != 0)
		{
			array[m][l] = str[k];
			l++;
		}
		else
		{
			m++;
			l = 0;
		}
		k++;
	}
	free(array);
	return (array);
}
