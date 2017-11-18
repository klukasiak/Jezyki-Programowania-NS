/*  Krystian Łukasiak 
 * 18.11.2017
 */
 
#include <stdio.h>

int doskonala(int x);

int main(){
	int x = 1, bool=0;
	while (x<10000) {
	bool = doskonala(x);
	if(bool == 1) printf("%d ", x);
	x++;
	}
	return 0;
}

int doskonala(int x){
	int suma_dzielnikow=0;
	for (int i = 1; i <= (x/2); i++) {
		if ((x % i) == 0)
			suma_dzielnikow += i;   
	}
	if (suma_dzielnikow == x) {
			return 1;
	}
	suma_dzielnikow = 0;
	return 0;
}
