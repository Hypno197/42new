#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
        int i;
    int *str = s;
    i = 0;
    while(n > 0)
    {
        str[i] = 0;
        n--;
        i++;
    }
}
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str + 13, 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/
