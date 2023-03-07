#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
} node;
node *head;

void insert_beg(int data)
{
  node *newnode, *temp;
  newnode = (node *)malloc(sizeof(node));
  if (newnode == 0)
  {
    printf("Unable to allocate memory\n");
  }
  else
  {
    temp = head;
    head = newnode;
    newnode->data = data;
    newnode->next = temp;
  }
}

void display()
{
  node *temp;
  temp = head;
  if (temp == 0)
  {
    printf("List is Empty\n");
  }
  else
  {
    while (temp != 0)
    {
      printf("%d\n", temp->data);
      temp = temp->next;
    }
  }
}

int main()
{
    int s;
    scanf("%d",&s);
    int a[s];
      for(int i=0;i<s;i++)
      {
          scanf("%d",&a[i]);
          insert_beg(a[i]);
      }
      display();

}