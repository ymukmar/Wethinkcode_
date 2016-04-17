/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 16:28:03 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/05 17:20:15 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	result = nb;
	nb--;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		result = 1;
	else
		while (nb > 1)
		{
			result = result * nb;
			nb--;
		}
	return(result);
}
