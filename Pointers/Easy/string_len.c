// finding length of string using pointers

#include <stdio.h>
int main()
{
    char *str = "Kavya";
    char *p = str;
    int len =0;
    while(*p != '\0')
    {
        p++;
        len++;
    }
    printf("%d",len);
    return 0;
}