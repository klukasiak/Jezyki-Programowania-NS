#include <stdio.h>

int main(){
	int a;
	printf("Podaj kod ASCII(dziesietny): \n");
	scanf("%d", &a);
	printf("%s%c\n", "Jest to: ", (char)a);
	printf("Podaj kod ASCII(szesnastkowy): \n");
	scanf("%x", &a);
	printf("%s%c\n", "Jest to: ", (char)a);
	printf("Podaj kod ASCII(oktalny): \n");
	scanf("%o", &a);
	printf("%s%c\n", "Jest to: ", (char)a);
}
