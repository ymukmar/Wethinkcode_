
int				ft_recursive_power(int nb, int power);

unsigned int	ft_active_bits(int value)
{
	unsigned int	k;

	k = 0;
	while (ft_recursive_power(2, k) < value)
		k++;
	return (k + 1);
}

int				ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	else if (power == 0)
		return 1;
	else if (power == 1)
		return nb;
	else
		nb = nb * ft_recursive_power(nb, (power - 1));
	return nb;
}
