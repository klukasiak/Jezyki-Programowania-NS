#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	FILE *fout;
	double a = 0.0;
	if ((fout=fopen("dane.dat", "w"))==NULL) {
		printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
		return 1;
	}
	srand(time(0));
	for(int i = 0 ; i<10; i++){
		double b = rand()%100;
		fprintf (fout, "%.2f %.2f %.2f\n", a, a*a,  b/100);
		a += 0.1;
	}
	fclose (fout);
	return 0;
}
