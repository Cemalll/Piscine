/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayortan <hayortan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:10:17 by hayortan          #+#    #+#             */
/*   Updated: 2023/08/01 15:36:07 by hayortan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char *ft_strstr(char *str, char *to_find)
{
    if (to_find[0] == '\0')
        return str;

    size_t i = 0;
    size_t j;

    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i + j] != '\0' && to_find[j] != '\0')
        {
            j++;
        }

        if (to_find[j] == '\0')
            return &str[i];

        i++;
    }

    return NULL; // Instead of 0, return NULL for pointer types.
}

