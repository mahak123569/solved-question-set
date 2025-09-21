// swaping of two variables without using third variables
#include <stdio.h>

int main() {
  int p=30,q=35;
  printf("p=%d\nq=%d\n",p,q);
  p=p+q;
  q=p-q;
  p=p-q;
  printf("swapping of p=%d\nq=%d\n",p,q);

    return 0;
}