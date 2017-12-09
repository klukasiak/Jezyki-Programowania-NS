#include <stdio.h>
/*
 * Krystian Łukasiak
 * 09.12.2017
*/

int newton(int n, int k){
	if(k==0 || k==n) return 1;
	else return newton(n-1, k)+ newton(n-1,k-1);
}

int main(){
	printf("%d\n", newton(4,2));
	printf("%d\n", newton(6,2));
}
