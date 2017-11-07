#include <stdio.h>

int main() {
  int n;
  int jest_pierwsza;
  printf("Podaj liczbe calkowita: ");
  scanf("%d" , &n);
  for(int i = 2; i<n; i++){
	  if (n%i==0){
		  if (i==n) jest_pierwsza = 1;
		  else jest_pierwsza = 0;
		  break;
	  }
  }
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
