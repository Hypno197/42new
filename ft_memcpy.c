 #include <string.h>
 #include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *dest1;
    const char *src1;
    int i;
    
    i = 0;
    dest1 = dest;
    src1 = src;
    while(n > 0)
    {
        dest1[i] = src1[i];
        i++;
        n--; 
    }
    return dest;
}
/*
int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);

    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}
*/
