/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:36 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 19:03:03 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char   *a;

    i = 0;
    a = s;
    while (n > i)
    {
        a[i] = n;
        i++;
    }
}