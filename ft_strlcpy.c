#include <string.h>
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while(size > 1 && src[i])
    {
        dst[i] = src[i];
        i++;
        size--;
    }
    dst[i] = '\0';
    while(src[i])
        i++;
    //return (size_t)i ;
    return (size_t)(i * sizeof(char));
}
/*
void test(int size) {
    char string[] = "Hello there, Venus";
    char buffer[20] = "xxxxxxxxxxxxxxxxxxx";
    int r =ft_strlcpy(buffer, string, size);
    int len = strlen(buffer);

    printf("Source: '%s', size: %d, buffer: '%s', len: %d, result: %d\n",
           string, size, buffer, len, r);
}

int main() {
    test(19);
    test(10);
    test(1);
    test(0);
    return 0;
}
*/
