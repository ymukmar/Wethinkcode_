/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 07:42:32 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 07:45:43 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	g_counter = 0;

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	g_counter ++;
	if (base == 1)
		return(g_counter);
	if ((base % 2) == 0)
		return (ft_collatz_conjecture(base / 2));
	else
		return (ft_collatz_conjecture((base * 3) + 1));
}
