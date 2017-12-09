#include <stdio.h>

int sort(int *tab, int length);
void printArray(int *tab, int length);

int main(){
	int n;
	int tablica1[] = {4,8,1,3,2,9,7,6,5};
	int tablica2[] = {1,2,3,4,5,7,8,6,9};
	int tablica3[] = {4,2,1,6,8,9,2,1,4};
	printf("Tablice przed sortowaniem: \n");
	
	printArray(tablica1,sizeof(tablica1)/4);
	printArray(tablica2,sizeof(tablica2)/4);
	printArray(tablica3,sizeof(tablica3)/4);
	
	printf("Tablice po sortowaniu oraz ilosc zmian: \n");
	
	n = sort(tablica1, sizeof(tablica1)/4);
	printArray(tablica1,sizeof(tablica1)/4);
	printf("   //%d\n", n); 
	
	n = sort(tablica2, sizeof(tablica2)/4);
	printArray(tablica2,sizeof(tablica2)/4);
	printf("   //%d\n", n); 
	
	n = sort(tablica3, sizeof(tablica3)/4);
	printArray(tablica3,sizeof(tablica3)/4);
	printf("   //%d\n", n); 
}

int sort(int *tab, int length){
	int buf, bubbles=0, n=length;
	for(int j = length; j>0; j--){
		for(int i = 0; i<length-1; i++){
			if(tab[i]>tab[i+1]){
				buf = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = buf;
				bubbles++;
			}
		}
	}
	return bubbles;
}

void printArray(int *tab, int length){
	for(int i = 0; i<length; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");
}
