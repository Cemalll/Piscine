/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayortan <hayortan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:24 by hayortan          #+#    #+#             */
/*   Updated: 2023/07/30 15:40:23 by hayortan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 127 || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	long	num;

	len = 0;
	num = nbr;
	while (base[len] != '\0')
		len++;
	if (check_base(base))
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		if (num >= len)
		{
			ft_putnbr_base(num / len, base);
			write(1, &base[num % len], 1);
		}
		if (num < len)
			write(1, &base[num], 1);
	}
}
