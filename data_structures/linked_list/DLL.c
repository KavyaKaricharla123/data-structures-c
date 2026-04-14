#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void print_list(struct node* head){
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


int main(){
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n;
    printf("enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if(head == NULL){
            head = temp = newnode;
        }
        else{
            newnode->prev = temp;
            temp->next = newnode;
            temp = newnode;
        }

    }
    print_list(head);
    
}



