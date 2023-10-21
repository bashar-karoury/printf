#include "main.h"

/**
* AddCharBeforeString - prefix string with char
* @src: string to be prefixed. SHOULD BE DYNAMICALLY ALLOCATED
* @ch : character at start
* @n : length of src
*
* Return : On Success pointer to destination , NULL if fail, SHOULD
* BE FREED AFTER USE
*/
char *AddCharBeforeString(char *src, char ch, int n)
{
    char *dest = NULL;
    int i = 0;

    if (src != NULL)
    {
        dest = (char *)malloc(n + 1);
        dest[0] = ch;
        for (i = 0; i < n; i++)
        {
            dest[i + 1] = src[i];
        }
        free(src);
    }
    return (dest);
}


/**
* string_len - calculate string length
* @s: string
*
* Return: length of string
*/
int string_len(char *s)
{
    int idx = 0;

    while (s[idx] != '\0')
        idx++;
    return (idx);
}
