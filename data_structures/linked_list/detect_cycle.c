#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node* next;
};

void printf_list(struct node*head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }  
}

bool detect_cycle(struct node *head){
    struct node*fast = head, *slow=head;
    if(head == NULL || head->next == NULL) return false;
    while(fast!=NULL&&fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;
        if(slow == fast){
            return true;
        }

    }
    return false;
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
   bool res = detect_cycle(head);
   printf("\n%d",res);
}