/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:29:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:29:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *str, int search_str)
{
    if (search_str == '\0')
        return (char *)str;
    
    while (*str)
    {
        if (*str == (char)search_str)
            return (char *)str;
        str++;
    }
    return (NULL);
}