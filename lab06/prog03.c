#include <stdio.h>

int main(){
	int age;
    double secInYear=3.156e7;
 
    printf("Podaj swoj wiek: ");
    scanf("%d", &age);
    printf("%s %lld", "Twoj wiek w sekundach to:", age*secInYear);
    return 0;
}
