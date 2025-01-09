int ft_isalnum(int c)
{
    if((c > 47 && c < 58) || (c >= 65 && c <= 90 )|| (c >= 97 && c <= 122))
        return (c);
    return (0);
}