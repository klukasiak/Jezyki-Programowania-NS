#include <stdio.h>

int Euklides(int a, int b){
	if(b == 0)
		return a;
	else 
		return Euklides(b, a%b);
}

int main(){
	printf("%d\n", Euklides(2,12));
	printf("%d\n", Euklides(24,36));
}
