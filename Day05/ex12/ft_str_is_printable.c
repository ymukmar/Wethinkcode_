/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 18:04:38 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/06 18:06:27 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iss_printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(iss_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
