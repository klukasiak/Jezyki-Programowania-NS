#include <stdio.h>
 
 /*
  * Krystian Łukasiak 15.12.2017
 */
void merge(int pocz, int sr, int kon, int *tab){
	int i,j,q;
	int t[30];
	for (int i=pocz; i<=kon; i++) 
		t[i]=tab[i];

	i=pocz; j=sr+1; q=pocz;
	while (i<=sr && j<=kon) {
		if (t[i]<t[j])
			tab[q++]=t[i++];
		else
			tab[q++]=t[j++];
	}

	while (i<=sr) 
		tab[q++]=t[i++];
}
 
void mergesort(int pocz, int kon, int *tab){

	int sr;
	if (pocz<kon) {
		sr=(pocz+kon)/2;
		mergesort(pocz, sr, tab);
		mergesort(sr+1, kon, tab);
		merge(pocz, sr, kon, tab);
	}
}
 
int main() {
	int tab[30] = {30,29,28,27,26,25,1,2,3,4,5,6,7,24,23,22,21,20,19,18,8,9,10,11,17,16,15,13,14,12};
	printf("Zbior przed sortowaniem:\n");
	for (int i=0; i<30; i++)
		printf("%d ", tab[i]);
 
	mergesort(0,30-1, tab);
 
	printf("\nZbior po sortowaniu:\n");
	for (int i=0; i<30; i++)
		printf("%d ", tab[i]);
}
