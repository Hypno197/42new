#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char* d1;
    const unsigned char* d2;
    int i;
    i = 0;
    d1 = s1;
    d2 = s2;
    while(n > 0 && d1[i] == d2[i])
    {
        i++;
        n--;
    }
    return (d1[i] - d2[i]);
}
/*
       int main()
{
    //check se compara anche dopo \0?
    // comparing two strings directly
    int comp = ft_memcmp("geaksforgeeks", "geeksforgeeks", 6);
 
    printf("%d", comp);
    return 0;
}
*/