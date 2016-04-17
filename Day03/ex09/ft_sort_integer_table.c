/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 08:37:21 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/04 16:38:38 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab [i + 1])
		{
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
			i++;
	}
	
}
