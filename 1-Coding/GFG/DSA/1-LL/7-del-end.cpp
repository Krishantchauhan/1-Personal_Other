#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void disp(node* head){
    printf("\n");
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
void delend(node* &head){
    node* curr=head;

    if(curr==NULL)
        printf("Linked List is Empty :(");
    if(head->next==NULL){
        free(head->next);
        head=NULL;
        printf("Now Its Empty ");
    }
    else{
        while(curr->next->next!=NULL)
            curr=curr->next;
        free(curr->next);
        curr->next=NULL;
    }
    // disp(head);
}

int main()
{

    node* head=NULL;
    head = new node(10);
    head->next = new node(20);
    delend(head);
    disp(head);
}