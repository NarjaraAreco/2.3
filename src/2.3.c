

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,b, c;
  printf("Informe o valor de a");
  scanf("%d",&a);


  printf("Informe o valor de b");
  scanf("%d",&b);

  if (a == b) {
	  c= a + b;
			 printf("O valor de c is: %d", c);
  }else {
	  c= a *b;
			  printf("O valor de c is: %d", c);
  }

return 0;
}


