#include <stdio.h>

int main() {
   
   int n1=100;
   int n2=200;
   int n3=10;
   int n4=3;
   int n5=10;
   int total1,total2;
   
  total1 = n1 + n2/ n3 - n4 * n5;
  
  total2 = (n1 + n2) /n3 - n4 * n5;
  
  printf("Result=%d\n",total1);
  printf("Result=%d\n",total2);
  
  return 0;
}