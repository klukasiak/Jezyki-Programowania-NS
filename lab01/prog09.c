#include <stdio.h>
#include <math.h>

int main(){
	double pocz, kon, krok, pierw;
	printf("Podaj wartosc poczatkowa, koncowa i krok\n");
	scanf("%lf%lf%lf", &pocz, &kon, &krok);
	while(pocz<=kon){
		pierw = sqrt(pocz);
		printf("%.4lf%s%.4lf\n", pocz, " ", pierw);
		pocz += krok;
	}
}
