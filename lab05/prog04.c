#include <stdio.h>

void odwrotnie (int n){
	while(n>0){
		printf("%d", n%10);
		n /= 10;
	}
	printf("\n");
}

int main(){
	int l;
	printf("Podaj liczbe calkowita; \n");
	scanf("%d", &l);
	printf("%s%d%s", "Liczba " , l , " od tylu ");
	odwrotnie(l);
}
