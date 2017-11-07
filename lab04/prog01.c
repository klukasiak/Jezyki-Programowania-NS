#include <stdio.h>

int main() {
  int M,n;
  int suma = 0;
  int i = 1;
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }
  n=i-1;
  printf("%s %d\n", "Szukane n to: ", n);
  return 0;
}
