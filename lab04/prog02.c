#include <stdio.h>

int main() {
  int n;
  printf("Podaj liczbe calkowita: ");
  scanf("%d" , &n);
  /* sprawdź czy n jest liczbą pierwszą */
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
