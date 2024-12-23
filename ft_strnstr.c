/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:28:29 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:28:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strnstr(const char *str, const char *search, size_t n)
{
    const char *s;
    const char *f;
    size_t l;

    if (search == '\0')
        return (char *)str;
    while (*str && n--)
    {
        s = str;
        f = search;
        l = n + 1;
        while (*f && l-- && *s == *f)
        {
            s++;
            f++;
        }
        if (*f == '\0')
            return (char *)str;
        str++;
    }
    return (NULL);
}