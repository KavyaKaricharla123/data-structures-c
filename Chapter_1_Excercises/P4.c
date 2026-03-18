/*Write a program to read the address of a user. Display
the result by breaking it in multiple lines.*/

#include <stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("enter the address(separated by commas):");
    scanf("%[^\n]", str); //“Read all characters until a newline (\n) is found.”
    while(str[i]!='\0'){
        if(str[i]==','){
            printf("\n");
        }
        else if(str[i]==' '){
            
        }   
        else{
            printf("%c",str[i]);
        }
        i++;
    }
}