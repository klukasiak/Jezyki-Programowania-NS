#include <stdio.h>

int main(){
	for(int i = 1; i<=4; i++){
		for(int j = 0; j<i; j++){
			putchar('*');
		}
		putchar('\n');
	}
	
	printf("\n");
	
	for(int i = 4; i>=0; i--){
		for(int j = 0; j<i; j++){
			putchar('*');
		}
		putchar('\n');
	}
	
	for(int i = 4; i>=0; i--){
		for(int j = i; j<4; j++){
			putchar(' ');
		}
		for(int j = 0; j<i; j++){
			putchar('*');
		}
		putchar('\n');
	}

	printf("\n");
	
	for(int i = 1; i<=4; i++){
		for(int j = i; j<4; j++){
			putchar(' ');
		}
		for(int j = 0; j<i; j++){
			putchar('*');
		}
		putchar('\n');
	}
	
}
