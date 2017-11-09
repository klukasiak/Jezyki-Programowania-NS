#include <stdio.h>

int doskonala(int i){
	int x = 1;
	int suma_dzielnikow = 0;
	
	for (i; i <= (x/2); i++) {
	if ((x % i) == 0)
			suma_dzielnikow += i;   
	}
	if (suma_dzielnikow == x) {
		printf("%d ", x);                  
	}
	++x;
	suma_dzielnikow = 0;    
}

int main(){
	int i = 1;
	while(doskonala(i)<10000){
		doskonala(i);
		i++;
	}
}
