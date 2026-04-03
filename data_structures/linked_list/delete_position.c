#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
void print_list(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp= temp->next;
    }
}

struct node* delete_position(struct node* head, int pos){
    struct node *curr=head;
    //empty list
    if(head==NULL){
        return head;
    }
    //first pos(0)
    if(pos==0){
        head = head->next;
        return head;  
    }
    //other position check
    int c = 0;
    while(curr != NULL && c<pos-1){
        curr = curr->next;
        c++;
    }
    if(curr == NULL || curr->next == NULL){
        return head;
    }
    struct node* temp = curr->next;
    curr->next=temp->next;
    free(temp);
    return head;
}


int main(){
    struct node *newnode,*temp=NULL, *head=NULL;
    
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if(temp==NULL){
            temp = head = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

    }
    print_list(head);
    int pos;
    printf("\nEnter the position of node to be deleted:");
    scanf("%d",&pos);
    head= delete_position(head,pos);
    print_list(head);
}
