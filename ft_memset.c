#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;
    char *str = s;
    i = 0;
    while(n > 0)
    {
        str[i] = c;
        n--;
        i++;
    }
    return s;
}
