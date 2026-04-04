#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
void print_list(struct node *head){
    struct node *temp=head;
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

struct node* reverse_list(struct node *head){
    struct node *curr=head,*nextnode=head,*prev=NULL;
    while(curr != NULL){
        nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;

    }
    return prev;


}
int main(){
    struct node* newnode=NULL, *head=NULL, *temp=NULL;
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head== NULL){
            head=temp=newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }

    print_list(head);
    head=reverse_list(head);
    printf("\n");
    print_list(head);
}