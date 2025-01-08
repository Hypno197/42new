#include <string.h>
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(dst[j] != '\0')
        j++;
    while(size > 1 && src[i] != '\0')
    {
        dst[j + i] = src[i];
        size--;
        i++;
    }
    dst[j + i] = '\0';
    while(src[i] != '\0')
        i++;
    return (j + i);
}
/*
void test(int size) {
    char dst[] = "this is ";
    char src[] = "concatenated correctly";
    int len = strlen(dst) +  strlen(src);
    int r =ft_strlcat(dst, src, size);

    printf("Source: '%s', size: %d, dst: '%s', len: %d, result: %d\n",
           dst, size, src, len, r);
}

int main() {
    test(30);
    test(15);
    test(40);
    test(0);
    return 0;
}

{
    int i;
    int dstlen;

    i = 0;
    dstlen = 0;
    while(dst[dstlen])
        dstlen++;
    while(size - dstlen > 1 && src[i] && dst[i])
    {
        dst[i+dstlen] = src[i];
        i++;
        size--;
    }
    dst[i] = '\0';
    while(src[i])
        i++;
    return (size_t)i ;
    //return (size_t)(i * sizeof(char));
}*/