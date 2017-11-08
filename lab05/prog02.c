#include <stdio.h>

int silnia(int a){
	if(a>1){
		return a*silnia(a-1);
	}
	else if(a == 1) return 1;
	else printf("Niepoprawna liczba \n");
}

int main(){
	printf("Silnia pierwszych 10 liczb naturalnych: \n");
	for(int i = 1; i<=10; i++){
		printf("%d%s%d\n", i, "! = ", silnia(i));
	}
	
}
