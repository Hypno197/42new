#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;
    int *str = s;
    i = 0;
    while(n > 0)
    {
        str[i] = c;
        n--;
        i++;
    }
    return (void)s;
}
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/
