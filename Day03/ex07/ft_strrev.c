/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 16:12:49 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/04 16:33:45 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strrev(char *str)
{
	int		length;
	int		temp;
	int		i;

	if (str)
	{
		i = 0;
		length = ft_strlen(str);
		while (i <= len / 2)
		{
			temp = str[i];
			str[i] = str[length - i];
				str[length - i] = temp;
			i++;
		}
	}
	return (str);
}
