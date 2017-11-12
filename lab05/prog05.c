#include <stdio.h>

void prostokat(int szer, int wys);
void owal(int szer);
void strzalka();
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
	int l = 0;
	int z = 0;
	if(szer%2==0){
		l = (szer/2-1);
		for(int i = 1; i<=szer; i++){
			if(i == 1 || i == szer){
				while(z<l){
					printf(" ");
					z++;
				}
				printf("**");
			}else{
				printf("*");
				while(z<szer){
					printf(" ");
									}
			}
			printf("\n");
		}
	}
}
