#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fout;
	FILE *fin;
	int ilosc[26]={0};
	int ilosc2[26]={0};
	char c;
	if ((fin=fopen(argv[1], "r"))==NULL) {
		printf ("Nie mogę otworzyć pliku do otwarcia!\n");
		return 1;
	}
	if ((fout=fopen(argv[2], "w"))==NULL) {
		printf ("Nie mogę otworzyć pliku do zapisu!\n");
		return 1;
	}
	while ((c = fgetc(fin)) != EOF) {
		if(c >= 'a' && c <= 'z'){
			ilosc[c%'a']++;
		}
		if(c >= 'A' && c <= 'Z'){
			ilosc2[c%'A']++;
		}
	}
	c = 'a';
	for(int i = 0; i<26; i++){
		fprintf(fout, "%c - %d\n", c, ilosc[i]);
		c++;
	}
	c = 'A';
	for(int i = 0; i<26; i++){
		fprintf(fout, "%c - %d\n", c, ilosc2[i]);
		c++;
	}
	fclose (fout);
	fclose (fin);
	return 0;
}
