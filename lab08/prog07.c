#include <stdio.h>

#define MIESIACE 12
#define LATA 4

int main () {
	int deszcz[LATA][MIESIACE] = { // dane o opadach są wyrażone w mm
		{29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  // 2008
		{24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  // 2009
		{31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  // 2010
		{39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}   // 2011
	};
	
	int sum=0, roczna=0;
	printf("\n\nOpady w kolejnych latach (w mm)\n");
	for(int i=0; i<LATA; i++){
		for(int j=0; j<MIESIACE; j++){
			sum += deszcz[i][j];
		}
		printf("%d\n", sum);
		roczna += sum;
		sum = 0;
	}
	printf("Roczna srednia wynosi %d mm\n\n\n", roczna/LATA);
	
	printf("Srednie miesieczne: \n");
	int miesieczne=0;
	for(int i = 1; i<=12; i++){
		printf("%4d", i);
	}
	printf("\n------------------------------------------------\n");
	for(int i = 0; i<MIESIACE; i++){
		for(int j = 0; j<LATA; j++){
			miesieczne += deszcz[j][i];
		}
		printf("%4d", miesieczne);
		miesieczne = 0;
	}
	printf("\n");
	return 0;
	
}
