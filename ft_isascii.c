#include "libft.h"
#include <stdio.h>

int ft_isacii(int c)
{
    if (c >= 0 && c <= 255)
        return (1);
    return (0);
}