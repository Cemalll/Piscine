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
    if (*to_find == '\0')
        return str; // Edge case: an empty string is always found in any string.

    while (*str)
    {
        char *str_ptr = str;
        char *to_find_ptr = to_find;

        while (*to_find_ptr && *str_ptr == *to_find_ptr)
        {
            str_ptr++;
            to_find_ptr++;
        }

        if (*to_find_ptr == '\0')
            return str; // If all characters in to_find are found, return the starting position in str.

        str++;
    }

    return NULL; // to_find not found in str, return NULL.
}
