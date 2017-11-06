#include <stdio.h>

int main(){
	int a,b,c,sum,ilo,min,max;
	printf("Podaj 3 liczby calkowite: \n");
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	ilo = a * b * c;
	if (a>b){
		if(a>c) max = a;
		else max = c;
	}
	else{
		if(b>c) max = b;
		else max = c;
	}
	if (a<b){
		if(a<c) min = a;
		else min = c;
	}
	else{
		if(b<c) min = b;
		else min = c;
	}
	printf("%s%d\n", "Suma wynosi: " , sum);
	printf("%s%d\n", "Iloczyn wynosi: " , ilo);
	printf("%s%d\n", "Najmniejsza liczba: " , min);
	printf("%s%d\n", "Najwieksza liczba: " , max);
}
