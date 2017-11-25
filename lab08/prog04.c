#include <stdio.h>
/*Krystian Łukasiak
 * 25.11.2017
*/

int roznicaMinMax(int *tab);

int main(){
	int tab[]={2,5,7,3,1,9,7,3,5,0};
	printf("%s%d\n", "Roznica min i max tablicy jest rowna: ", roznicaMinMax(tab));
	
}

int roznicaMinMax(int *tab){
	int min=0, max=0, i=1;
	min = tab[0];
	max = tab[0];
	while(tab[i]!=0){
		if(tab[i]<min) min = tab[i];
		else if(tab[i]>max) max = tab[i];
		i++;
	}
	return max-min;
}
