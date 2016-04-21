/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 15:08:51 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 07:30:39 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_takes_place(int hour)
{
	if (hour < 0 || hour > 24)
		printf("PLEASE ENTER A VALID TIME\n");
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 24 || hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else 
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
}
