/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:29:03 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:29:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int ch)
{
    char c = (char)ch;
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    else
        return (c);
    return (c);
}