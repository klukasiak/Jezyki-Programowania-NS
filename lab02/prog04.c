#include <stdio.h>

int main(){
	int n;
	int silnia = 1;
	printf("Podaj liczbe dla ktorej obliczyc silnie: \n");
	scanf("%d" , &n);
	for(int i = 1; i<=n; i++){
		silnia *= i;
	}
	printf("%d\n", silnia);
}
