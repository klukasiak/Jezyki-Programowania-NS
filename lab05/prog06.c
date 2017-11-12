#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMenu();
int randomise();
void startNewGame();
void printCredits();
void posMessage();
void negMessage();

int main(){
	int exit = 0;
	int input;
	while(!exit){
		system("clear");
		printMenu();
		scanf("%d", &input);
		switch(input){
			case 1:
				startNewGame();
				break;
			case 2:
				printCredits();
				break;
			case 3:
				exit = 1;
				break;
			default:
				printf("Podano bledny wybor menu! Sproboj jeszcze raz \n");
		}
	}
	return 0;
}

void printMenu(){
	printf("Wybierz jedna z opcji: \n");
	printf("1. Zacznij nowa gre\n");
	printf("2. O programie\n");
	printf("3. Zakoncz program\n");
}

int randomise(){
	return rand()%11;
}

void startNewGame(){
	int a,b,result,score = 0, userResult = 0, pos = 0, neg = 0;
	char ch;
	system("clear");
	for(int i = 0; i<5; i++){
		srand(time(0));
		a = randomise();
		b = randomise();
		result = a*b;
		printf("%d %s %d %s\n", a, "*", b, "=");
		printf("Podaj wynik: \n");
		scanf("%d", &userResult);
		if(result == userResult){
			posMessage();
			score += 1;
			pos++;
		}else{
			negMessage();
			score -=1;
			neg++;
		}
	}
	printf("%s%d%s%d%s%d\n", "Gra skonczona\n Twoj wynik to: " , score , "\n ilosc dobrych odpowiedzi: ", pos, "\n ilosc zlych odpowiedzi: ", neg);
	scanf("%ch" , &ch);
}

void printCredits(){
	char ch;
	printf("Gra sprawdzajaca znajomosc tabliczki do 100\n");
	printf("Gracz otrzymuje 5 rownan do rozwiazania po kolei\n");
	printf("Na koniec gry jego wyniki sa sprawdzane i podliczane \n\n\n\n\n\n");
	printf("Wykonal Krystian Lukasiak\n");
	printf("Wcisnij enter aby przejsc dalej......\n");
	
	scanf("%ch", &ch);
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

void negMessage(){
	int i;
	srand(time(0));
	i = rand()%3;
	
	switch(i){
		case 0:
			printf("Zla odpowiedz :(\n");
			break;
		case 1:
			printf("Oj, niedobrze :(\n");
			break;
		case 2:
			printf("Nastepnym razem moze pojdzie Ci lepiej :(\n");
			break;
		default:
			break;
	}
}
