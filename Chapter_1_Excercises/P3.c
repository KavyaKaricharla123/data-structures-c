/*Write a program to count the number of vowels
in a text.*/
#include <stdio.h>
void vowelCountUsingStr(){
    char str[100];
    int i=0;
    int c=0;
    printf("\nEnter the string:");
    scanf("%s",str);
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            c++;
        }
        i++;
    }
    printf("Number of vowels = %d\n", c);
}

int main(){
    char ch;
    int c=0;
    printf("enter the text:");
    while((ch=getchar())!='\n'){
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            c++;
        }
    }
    printf("Number of vowels = %d\n", c);
    vowelCountUsingStr();
}
