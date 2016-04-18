/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 17:24:02 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/13 17:31:05 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*newtab;
	int		i;

	i = 0;
	newtab = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		newtab[i] = f(tab[i]);
		i++;
	}
	return (newtab);
}
