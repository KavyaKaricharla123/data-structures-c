#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printf_list(struct node*head){
    struct node *temp = head;
    if(head == NULL){
        printf("Empty list.");
        return;
    }
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }  
}

struct node* middle_node(struct node *head){
    struct node*fast = head, *slow=head;
    if(head == NULL || head->next == NULL) return head;
    while(fast!=NULL&&fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;
    }
    return slow;
}

int main(){
    struct node *head=NULL,*temp=NULL;
    struct node* newnode = NULL;
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if(head == NULL){
            head=temp=newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

    }

    printf_list(head);
   struct node * middle= middle_node(head);
   if(middle==NULL) printf("\nEmpty list, No middle element.");
   else printf("\nMiddle node: %d", middle->data);
   
}