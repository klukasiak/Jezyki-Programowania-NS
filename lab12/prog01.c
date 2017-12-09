#include <stdio.h>
/*
 * Krystian Łukasiak
 * 09.12.2017
*/


int potega(int n, int k){
	if(k == 0) return 1;
	else return n*potega(n, k-1);
}
int main(){
	printf("%d\n", potega(2,3));
}
