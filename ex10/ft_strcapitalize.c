/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayortan <hayortan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:19:49 by hayortan          #+#    #+#             */
/*   Updated: 2023/07/27 17:19:51 by hayortan         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (!((str[a] >= 48 && str[a] <= 57) || (str[a] >= 65 && str[a] <= 90)
				|| (str[a] >= 97 && str[a] <= 122)))
		{
			if (str[a + 1] >= 97 && str[a + 1] <= 122)
			{
				str[a + 1] = str[a + 1] - 32;
			}
		}
		a++;
	}
	return (str);
}

int	main(void)
{
    char uppercase[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *a = ft_strlowcase(uppercase);
	printf("%s\n", ft_strcapitalize(a));
}
