#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void print_list(struct node *head){
    struct node *temp = head;
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }  
}

struct node * delete_node(struct node * head, int val){
    struct node  *prev = NULL, *curr= NULL;
    curr = head;
    //empty list
    if(head == NULL){
        return head;
    }
    //delete head node
    if(head->data == val){
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    //delete other nodes
    while( curr != NULL && curr->data != val){
        prev = curr;
        curr = curr->next;
    }
    //value not found
    if(curr == NULL){
        return head;
    }
    prev->next = curr->next;
    free(curr); 
    return head;   
    }
       
int main(){
    struct node *newnode, *temp = NULL, *head= NULL;
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
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
   int val;
   printf("\nEnter the node to be deleted: ");
   scanf("%d",&val);
   head = delete_node(head,val);
   print_list(head);
   return 0;
}