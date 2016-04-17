/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 16:53:32 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/05 17:17:41 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		base;
	int		sqrt;

	base = 1;
	sqrt = 1;
	if (nb == 0)
		return (0);
	while (base * base < nb)
		base++;
	if ((nb % base) == 0)
		return base;
	else
		return (0);
}
