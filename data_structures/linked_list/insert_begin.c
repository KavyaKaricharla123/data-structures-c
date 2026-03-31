#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void print_list(struct node *head){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }   
}
struct node* insert_begin(struct node *head){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter the data for newnode:");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
}
int main(){
    struct node *newnode,*head = NULL,*temp = NULL;
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(temp==NULL){
            temp = head= newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

    }
    print_list(head); 
    head = insert_begin(head);  
    print_list(head);  
}

