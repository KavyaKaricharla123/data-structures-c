#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void print_list(struct node*head){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
struct node* insert_end(struct node *head){
    struct node *newnode,*temp;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter the newnode data:");
    scanf("%d",&newnode->data);
    temp = head;
    if(head ==NULL){
        head = newnode;
        newnode->next = NULL;
    }
    else{
        while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;

    }
    
    return head; 
}


int main(){
    struct node *newnode, *temp=NULL,*head= NULL;
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(temp == NULL){
            temp = head = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

    }
    print_list(head);
   head = insert_end(head);
   print_list(head);

}