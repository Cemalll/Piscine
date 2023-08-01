int	ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	factorial = 1;
	i = 1;
	if (nb < 0) 
		return (0);
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
