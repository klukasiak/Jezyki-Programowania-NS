#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b){
	return sqrt(pow(a, 2) + pow(b, 2));
}

int main(){
	printf("trojkat bok1 bok2\n");
	printf("-----------------\n");
	printf("%s%lf\n", "   1    3.0  4.0  ", przeciwprostokatna(3,4));
	printf("%s%lf\n", "   2    5.0  5.0  ", przeciwprostokatna(5,5));
	printf("%s%lf\n", "   3    1.0  6.0  ", przeciwprostokatna(1,6));
}
