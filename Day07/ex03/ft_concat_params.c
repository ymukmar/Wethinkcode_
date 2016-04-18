/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 14:55:33 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/07 14:55:55 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_size_params(int argc, char **argv)
{
	int		size_argv;
	int		i;
	int		z;

	i = 1;
	z = 0;
	size_argv = 0;
	while (i < argc)
	{
		while (argv[i][z])
			z++;
		size_argv += z;
		z = 0;
		i++;
	}
	return (size_argv);
}

void	write_tab(int argc, char **argv, char *string, int size_params)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 1;
	z = 0;
	while (i < size_params)
	{
		while (j < argc)
		{
			while (argv[j][z])
			{
				string[i] = argv[j][z];
				z++;
				i++;
			}
			string[i] = '\n';
			i++;
			z = 0;
			j++;
		}
	}
	string[i] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		size_params;

	size_params = calc_size_params(argc, argv);
	string = (char*)malloc(sizeof(*string) * (size_params + argc - 1));
	write_tab(argc, argv, string, size_params);
	return (string);
}
