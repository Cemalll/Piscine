/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayortan <hayortan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:19:38 by hayortan          #+#    #+#             */
/*   Updated: 2023/07/27 17:19:39 by hayortan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}

int	main(void)
{
    char uppercase[] = "SAHGJDKSAFHGSDFHJVBKDS-*098*/-+GHFGHGFddFGH";
	printf("%s\n", ft_strlowcase(uppercase));
}
