/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 08:15:19 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 08:18:02 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define TRUE 1
#define FALSE 0
#define CLOSE 0
#define OPEN 1
#include <unistd.h>

typedef int ft_bool;

typedef struct s_door
{
	int		state;
} t_door;

ft_bool close_door(t_door *door);
ft_bool open_door(t_door *door);
ft_bool is_door_open(t_door *door);
ft_bool is_door_close(t_door *door);

