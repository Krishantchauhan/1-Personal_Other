#include <stdio.h>
#include<string.h>


 int main() 
 {
  int count=0,s,q;
  scanf("%d",&s);
  scanf("%d",&q);
  char string[s];
  char query[q];

    for(int i=0;i<s;i++)
    {
        scanf("%s",string[i]);
    }  
    for(int i=0;i<q;i++)
    {
        scanf("%s",query[i]);
    }

     for(int i=0;i<s;i++)
    {
        printf("%s",string[i]);
    }  
    for(int i=0;i<q;i++)
    {
        printf("%s",query[i]);
    }



}