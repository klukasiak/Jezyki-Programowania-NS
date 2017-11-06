#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Podaj liczbe calkowita wieksza od 1\n");
	scanf("%d", &n);
	if(n<1){
		printf("Podano zla liczbe!\n");
		return 0;
	}
	for(int i = 1; i<=n; i++){
		sum += i;
	}
	
	printf("%s%d%s%d\n", "Suma liczb od 1 do ", n, " jest rowna ", sum);
}
