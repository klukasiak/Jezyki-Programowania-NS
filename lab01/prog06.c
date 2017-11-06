#include <stdio.h>
#include <math.h>

int main(){
	double l, pierw;
	printf("Podaj liczbe rzeczywista do obliczenia pierwiastka: \n");
	scanf("%lf", &l);
	if(l<0){
		printf("Podano niepoprawna liczbe :(\n");
		return 0;
	}
	pierw = sqrt(l);
	printf("%s%lf%s%lf\n", "Pierwiastek z liczby " , l , " jest rowny " , pierw);
}
