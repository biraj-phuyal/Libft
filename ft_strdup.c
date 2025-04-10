/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:30 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 14:45:17 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	get_len(const char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc((get_len(src) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 3)
	{
		printf("Put more then two argumet");  
	}
	char *src = argv[1];
	char *new = ft_strdup(src);

	printf("Source -> %s\nDuplicated source -> %s\n", src, new);
	free(new);
}*/
