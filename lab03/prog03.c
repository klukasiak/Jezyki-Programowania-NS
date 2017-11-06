#include <stdio.h>

int main(){
	int a,b;
	printf("Podaj dwie rozne liczby calkowite: \n");
	scanf("%d%d" , &a, &b);
	if(a<b){
		while(a<=b){
			printf("%d%s" , a , " ");
			a++;
		}
	}
	else{
	while(b<=a){
			printf("%d%s" , b , " ");
			b++;
		}
	}
}
