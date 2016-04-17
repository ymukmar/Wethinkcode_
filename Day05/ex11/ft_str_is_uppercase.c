/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 18:03:37 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/06 18:04:20 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iss_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(iss_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
