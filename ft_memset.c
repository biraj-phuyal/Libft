/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:18 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 15:02:08 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned int	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/* 
int main()
{
    int lol[] = {2, 4, 5, 6, 5, 7};
    int x = 5;
    ft_memset(lol, x, sizeof(int) * 4);

    for (int i = 0; i < 6; i++){
        printf("%d", lol[i]);
    }
    printf("\n");
    return 0;
}
 */