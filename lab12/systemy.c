#include <stdio.h>

void zamiana(int liczba, int system);

int main(){
	zamiana(8, 2);
	printf("\n");
	zamiana(64,8);
}

void zamiana(int liczba, int system){
	if(liczba>0){
		zamiana(liczba/system, system);
		printf("%d", liczba%system);
	}
}
