

#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    size_t len;

    if (!s)
        return (0);
    len = 0;
    while (s[len])
        len++;
    return (len);
}

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}

char *gnl_strjoin(char *s1, char *s2)
{
    size_t  i;
    size_t  j;
    char    *res;

    i = 0;
    j = 0;
    if (!s2)
        return (s1);
    res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!res)
        return (NULL);
    while (s1 && s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[j])
        res[i++] = s2[j++];
    res[i] = '\0';
    free(s1);
    return (res);
}
