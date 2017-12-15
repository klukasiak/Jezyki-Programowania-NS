#include <stdio.h>
#define N 30
 
int tab[N] = {30,29,28,27,26,25,1,2,3,4,5,6,7,24,23,22,21,20,19,18,8,9,10,11,17,16,15,13,14,12};
int t[N];

void merge(int pocz, int sr, int kon){
	int i,j,q;
	for (i=pocz; i<=kon; i++) 
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
 
void mergesort(int pocz, int kon){
	int sr;
	if (pocz<kon) {
		sr=(pocz+kon)/2;
		mergesort(pocz, sr);
		mergesort(sr+1, kon);
		merge(pocz, sr, kon);
	}
}
 
int main() {
	int i;
 
	printf("Zbior przed sortowaniem:\n");
	for (i=0; i<N; i++)
		printf("%d ", tab[i]);
 
	mergesort(0,N-1);
 
	printf("\nZbior po sortowaniu:\n");
	for (i=0; i<N; i++)
		printf("%d ", tab[i]);
}
