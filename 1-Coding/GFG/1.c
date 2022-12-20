#include <stdio.h>

int main(void) {
	for (int i = 1; i < 6; i++) {
	  for (int j = 1; j < 8; j++) {
	      if(j == (5 - i) || j == (3 + i) || i==4)
	      {
	          printf("*");
	      }
	      else
	      printf(" ");
	  }
	  printf("\n");
	}

	return 0;
}
