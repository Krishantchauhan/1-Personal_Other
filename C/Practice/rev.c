
#include <stdio.h>
#include<math.h>

int prime(int a){

  int num=a;
  int temp;
  int arm=0;

  while (a>0)
  {
    temp = a%10;
    arm = pow(temp,3)+arm;
    a/=10;
  }
  if (arm == num)
  {
    printf("The Number is Arm\n");
  }
  else
  {
    printf("NOt Arm\n\n");
  }
  return 0;
}


void main()
{
  int a ;
  printf("Enter a number \n ");
  scanf("%d",&a);
  //123
  //321
  int rev=0;
  int temp;

  int check;

  // check = prime(a);

  prime(a);


  // if (check == -1 )
  // {
  //   printf("Number is not Prime \n");
  // }
  // else
  //   {
  //     printf("%d\n",check);
  //   }



}
