/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 08:01:07 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 08:11:21 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#define SAVE_AUSTIN_POWERS "Female-bot"

typedef struct t_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}	t_perso;
