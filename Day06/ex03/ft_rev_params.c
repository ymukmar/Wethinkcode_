/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 16:20:16 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/07 16:20:22 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index;
	int		temp;

	temp = 0;
	index = argc - 1;
	while (index > 0)
	{
		while (argv[index][temp])
		{
			ft_putchar(argv[index][temp]);
			temp++;
		}
		ft_putchar('\n');
		temp = 0;
		index--;
	}
	return (0);
}
