/*Write a program to prepare a grocery bill. Enter
the name of the items purchased, quantity in which
it is purchased, and its price per unit. Then display
the bill in the following format:
************ B I L L ************
Item Quantity Price Amount
––––––––––––––––––––––––––––––––––––––––––––––––
–––––––––––––––––––––––––––––––––––––––––––––––––
Total Amount to be paid
––––––––––––––––––––––––––––––––––––––––––––––––*/

#include <stdio.h>
int main(){
    int NOI;//number of items
    char item[10][100];
    int quantity[100];
    float ppu[100], amount[100];
    int sum =0;
    printf("Enter total number of different items in grocery:");
    scanf("%d",&NOI);
    for(int i=0;i<NOI;i++){
    printf("Enter item name:");
    scanf("%s",item[i]);
    printf("Enter the quantity of the item:");
    scanf("%d",&quantity[i]);
    printf("Enter price per unit:");
    scanf("%f",&ppu[i]);
    amount[i] = (float)quantity[i] * ppu[i];
    sum= sum+amount[i];
    }


    printf("************ B I L L ************ \n Item Quantity Price Amount \n");
    printf("---------------------------- \n");
    
    for(int i=0;i<NOI;i++){
    printf(" %s %d %.2f %.2f \n", item[i], quantity[i], ppu[i], amount[i]);

    }
    printf("----------------------------------------- \n");
    printf("Total Amount to be paid = %d \n",sum);
    printf("----------------------------------------- \n");
    return 0;
    

    

}