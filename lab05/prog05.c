#include <stdio.h>

void prostokat(int szer, int wys);
void owal(int szer);
void strzalka(int wys);
void diament();

int main(){
	prostokat(3,4);
	owal(6);
	printf("  **  \n");
	printf(" *  * \n");
	printf("*    *\n");
	printf("*    *\n");
	printf(" *  * \n");
	printf("  **  \n");
}

void prostokat(int szer, int wys){
	int  l = 0;
	for(int i = 0; i<wys; i++){
		if(i == 0 || i == wys - 1){
			while(l<szer){
				printf("*");
				l++;
			}
		}else{
			printf("*");
			while(l<szer-2){
				printf(" ");
				l++;
			}
			printf("*");
		}
		l = 0;
		printf("\n");
	}
}

void owal(int szer){
	// conajmniej 4 jednostki tylko parzyste
	int s;
	int z = 1;
	s = szer/2;
	for(int i = 1; i<=szer; i++){
		while(z<s){
			printf(" ");
			z++;
		}
		if(i==1 || i==szer) printf("**");
		while(z<szer){
			printf(" ");
			z++;
		}
	printf("\n");
	z = 1;
	}
}

void strzalka(int wys){
	int a = wys * 2 - 1;
	for(int i = 1; i<= wys*2; i++){
		if(i <= wys){
			
		}
	}
		
	
}
