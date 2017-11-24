#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomise();
void printMenu();
void printCredits();
void startGame();


int main(){
	int exit=0, input=0;
	while(!exit){
		printMenu();
		scanf("%d", &input);
		switch(input){
			case 1:
				startGame();
				break;
			case 2:
				printCredits();
				break;
			case 3:
				exit=1;
				break;
			default:
				break;
		}
	}
}

int randomise(){
	return rand()%999+1;
}

void printMenu(){
	printf("***************************\n");
	printf("WITAJ W GRZE ZGADNIJ LICZBE\n");
	printf("Wybierz jedna z opcji: \n");
	printf("1. Rozpocznij gre.\n");
	printf("2. O grze\n");
	printf("3. Zakoncz gre\n");
}

void printCredits(){
	printf("Gra polega na odgadnieciu liczby z przedzialu <1,1000>\n");
	printf("Po probie zgadniecia komputer odpowiada czy liczba jest mniejsza czy wieksza\n");
	printf("od twojej odpowiedzi. Gra konczy sie gdy uzytkownik zgadnie liczbe.\n");
}

void startGame(){
	srand(time(0));
	int a=0, b=0, end=0, value=0;;
	a = randomise();
	while(!end){
		printf("Sprobuj zgadnac jaka liczbe mam na mysli: \n");
		scanf("%d", &b);
		value++;
		if(b>a) printf("Za duza...\n");
		else if(b<a) printf("Za mala...\n");
		else{
			 printf("%s%d\n", "Gratulacje, zgadles!\n Ilosc twoich prob to: " , value);
			 end = 1;
		}
	}
}
