#include <stddef.h>
#include <stdio.h>
static char *ft_strstr(const char *s1, const char *s2, size_t len)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && len > 0 && s2[i] != '\0')
    {
        i++;
        len--;
    }
    if(s2[i] == '\0')
        return (char*)s1;
    return NULL;
}

char *ft_strnstr(const char *big,	const char *little, size_t len)
{
    int i;
    
    i = 0;
    if(*little == '\0')
        return (char*)big;
    while (big[i] != '\0' && len > 0)
    {
        if(ft_strstr(&big[i], little, len) != NULL)
        {
            return (ft_strstr(&big[i], little, len));
        }
        i++;
        len--;
    }
    return NULL;
}
/*
int main()
{
	     const char	*largestring = "Foo Bar Baz";
	     const char	*smallstring = "Bar";
	     char *ptr;

	     ptr = ft_strnstr(largestring,	smallstring, 10000);
        printf("%s", ptr);
}
*/