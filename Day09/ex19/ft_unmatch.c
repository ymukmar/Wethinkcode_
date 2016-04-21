/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:04:04 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 12:05:07 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int		k;
	int		l;

	k = 0;
	while (k < length)
	{
		l = k + 1;
		while (l <= length && tab[l] && tab[k] != 'NULL')
		{
			l++;
			if (tab[k] == tab[l])
			{
				tab[k] = 'NULL';
				tab[l] = 'NULL';
			}
		}
		if (tab[k] != tab[l] && tab[l] = length && tab[k != 'NULL'])
			return (tab[k]);
	}
	return (0);
}
