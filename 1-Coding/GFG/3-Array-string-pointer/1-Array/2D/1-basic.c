#include <stdio.h>
 void main()
   {
  int i,j,r,c;
  int a[3][2]={{10,20},
                {30,40},
              {50,60}};

  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
      {
        printf("%d\t",a[i][j]);
      }
  }

}
