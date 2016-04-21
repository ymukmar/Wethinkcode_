/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 08:18:42 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 09:28:25 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
			{
				write(1, &str[i], 1);
				i++;
			}
}
ft_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

ft_bool open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}

ft_bool is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	door->state = OPEN;
	return (TRUE);
}

ft_bool is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n") ;
	door->state = CLOSE;
	return (TRUE);
}

