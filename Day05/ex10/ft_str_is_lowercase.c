/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 18:02:36 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/06 18:03:25 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iss_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(iss_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
