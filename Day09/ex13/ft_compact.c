/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 11:32:59 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 11:34:28 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		k;
	int		l;

	k = 0;
	while (k <= length)
	{
		if (tab[k] > 0)
		{
			l = k;
			while (tab[l+1])
			{
				tab[l] = tab[l+1];
				l++;
			}
			length--;
		}
		k++;
	}
	return (length);
}