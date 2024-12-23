/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:35:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:35:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *calloc(size_t nitems, size_t size)
{
    int *new;
    int *s;

    new = (int *)malloc(sizeof(nitems));
    s = new;
    if (nitems != '\0')
    {
        while (size--)
        {
            s = 0;
            s++;
        }
        return (void *)new;
    }
    free (new);
    return NULL;
}

int main()
{
    size_t i = 1;
    size_t size = 5;
    printf("%d", calloc(i, size));
}