#include <stdio.h>
#include <math.h>

int main(){
	double l, pierw, odwr;
	printf("Podaj liczbe rzeczywista do obliczenia pierwiastka i odwrotnosci: \n");
	scanf("%lf", &l);
	if(l==0){
		printf("Nie mozna obliczyc odwrotnosci.\n");
		pierw = sqrt(l);
		printf("%s%lf%s%lf\n", "Pierwiastek liczby ", l , " jest rowny " , pierw);
		return 0;
	}
	if(l<0){
		printf("Nie mozna obliczyc pierwiastka. \n");
		odwr = 1/l;
		printf("%s%lf%s%lf\n", "Odwrotnosc z liczby " , l , " jest rowna " , odwr);
		return 0;
	}
	pierw = sqrt(l);
	odwr = 1/l;
	printf("%s%lf%s%lf%s%lf\n", "Pierwiastek liczby " , l , " jest rowny " , pierw , " a jej odwrotnosc jest rowna ", odwr); 
	
}
