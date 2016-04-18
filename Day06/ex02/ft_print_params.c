/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 16:19:32 by ymukmar           #+#    #+#             */
/*   Updated: 2016/04/07 16:19:38 by ymukmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index;
	int		temp;

	index = 1;
	temp = 0;
	while (index < argc)
	{
		while (argv[index][temp])
		{
			ft_putchar(argv[index][temp]);
			temp++;
		}
		ft_putchar('\n');
		temp = 0;
		index++;
	}
	return (0);
}
