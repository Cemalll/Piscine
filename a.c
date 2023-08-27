#include <unistd.h>

int check(char *array, int index) 
{
	int i;

	i = 0;
	while (i < index)
	{
		if (array[i] == array[index] || array[index] - array[i] == index - i || array[index] - array[i] == i - index)
			return (0);
		i++;
	}
	return (1);
}

void ft_ten_queens_puzzle_return(char *sayi, int index)
{
	int i;

	if (index == 10)
	{
		    write(1, sayi, 10);
		    write(1, "\n", 1);
		return;
	}
	i = 0;
	while (i < 10)
	{
		sayi[index] = i + '0';
		if (check(sayi, index))
		{
			ft_ten_queens_puzzle_return(sayi, index + 1); 
		}
		i++;
	}
}

int ft_ten_queens_puzzle(void)
{
	char sayi[10];

	ft_ten_queens_puzzle_return(sayi, 0);
	return (0);
}

int main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
