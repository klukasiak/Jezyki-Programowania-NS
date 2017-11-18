/*  Krystian Łukasiak 
 * 18.11.2017
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printMenu();
void startGame(int max);
void posMessage();

int main(int argc, char *argv[]){
	int input=0, exit=0, max=0;
	max = atoi(argv[1]);
	srand(time(0));
	while(!exit){
		printMenu();
		scanf("%d", &input);
		switch(input){
			case 1:
				startGame(max);
				break;
			case 2:
				exit = 1;
				break;
			default:
				break;
		}
	}
	return 0;
}

void printMenu(){
	printf("Witaj w programie, wybierz jedna z opcji:\n");
	printf("1. Rozpocznij nowa gre\n");
	printf("2. Zakoncz program\n");
}

void startGame(int max){
	int liczba, input=0;
	liczba = rand()%max+1;
	while(input!=liczba){
		printf("%s%d%s\n", "Podaj liczbe z przedzialu <1,", max, "> :");
		scanf("%d", &input);
		if(input>liczba) printf("Za duzo :)\n");
		else printf("Za malo :)\n");
	}
	posMessage();
}

void posMessage(){
	int i;
	srand(time(0));
	i = rand()%3;
	
	switch(i){
		case 0:
			printf("Bardzo dobrze! \n");
			break;
		case 1:
			printf("Swietnie!\n");
			break;
		case 2:
			printf("Dobra robota!\n");
			break;
		default:
			break;
	}
}
