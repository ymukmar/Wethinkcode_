/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 16:57:16 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/05 17:18:01 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		temp;

	temp = 2;
	if (nb <= 1)
		return (0);
	while (temp <= nb / temp)
	{
		if (nb % temp == 0)
			return (0);
		temp++;
	}
	return (1);
}
