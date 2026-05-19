#include <stdio.h>
#include<string.h>

int main()
{
    char str[] = "Kavya";
    char *p = str;
    int a = 0, b =strlen(str)-1;
    while(a<b){
        char temp=*(p+a);
        *(p+a)=*(p+b);
        *(p+b)=temp;
        a++;
        b--;

    }
    printf("%s", str);
    return 0;
}