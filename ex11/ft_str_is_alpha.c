/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayortan <hayortan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:05:00 by hayortan          #+#    #+#             */
/*   Updated: 2023/07/27 17:10:06 by hayortan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha(""));
}
