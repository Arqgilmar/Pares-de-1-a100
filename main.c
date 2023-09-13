#include <stdio.h>
int main(void) {
  
  int i = 0;
  int n1, n2;
  
  printf("Digite um número:\n");
  scanf("%d", &n1);
  printf("Digite outro número:\n");
  scanf("%d", &n2);
  
  for (i = n1; i <= n2; i++){
    if(i % 2 == 0){
      printf("%i\n", i);
    }
  }
  return 0;
}
