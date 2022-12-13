#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
}node;

 int main()
 {
   node *head=new node(10);
   head->next=new node(20);
   return 0;

}
