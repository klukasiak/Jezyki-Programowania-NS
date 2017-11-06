#include <stdio.h>

int main(){
	double tab[6];
	int licznik = 0;
	for(int i = 0; i<6; i++){
		printf("%s%d%s\n", "Podaj " , i+1, " liczbe: ");
		scanf("%lf", &tab[i]);
	}
	
	for(int i = 0; i<6; i++){
		if(tab[i]>0) licznik++;
	}
	
	printf("%s%d\n", "Ilosc liczb dodanich: " , licznik);
}
