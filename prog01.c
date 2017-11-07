#include <stdio.h>

int main() {
  int M;
  int suma = 0;
  int i = 1;
  int n;
  printf("Podaj liczbe M: \n");
  scanf("%d", &M);
  while (suma <= M) {
     suma=suma+i;
     i++;
  }
  n = i - 1;
  printf("%s %d\n", "Szukane n to: ", n);
  return 0;
}
