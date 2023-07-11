#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n/2) * 2 == n ){
    printf("%d は偶数です\n", n);
  }
  return 0;
}
