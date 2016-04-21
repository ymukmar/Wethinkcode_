/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 00:01:13 by ymukmar           #+#    #+#             */
/*   Updated: 2016/02/12 07:33:50 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	up_shift(char letter);
char	low_shift(char letter);

char	*ft_rot42(char *str)
{
	int		k;

	k = 0;
	while (str[k])
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
			str[k] = up_shift(str[k]);
		else if (str[k] >= 'a' && str[k] <= 'z')
			str[k] = low_shift(str[k]);
		k++;
	}
	return (str);
}

char	up_shift(char letter)
{
	letter = (((letter - 'A') + 43) % 26) + 'A';
	return (letter);
}

char	low_shift(char letter)
{
	letter = (((letter - 'a') + 43) % 26) + 'a';
	return (letter);
}
