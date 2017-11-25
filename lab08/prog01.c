#include <stdio.h>
void swap(int *a, int *b);

int main(){
	int a,b;
	printf("Podaj dwie liczby do zamiany: \n");
	scanf("%d%d", &a , &b);
	swap(&a, &b);
	printf("%s%d %d\n", "Zamienione liczby: ", a , b);
	return 0;
}

void swap(int *a, int *b){
	int buf;
	buf = *a;
	*a = *b;
	*b = buf;
}
