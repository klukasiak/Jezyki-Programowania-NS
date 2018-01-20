/*
 * Krystian Łukasiak 20.01.18
*/
#include <stdio.h>
#include "strlib.h"

void WP0(string pocz, string reszta){
	int l,i;
	string np,nr;
	l = StringLength(reszta);
	if (reszta=="") printf ("%s\n", pocz);
	else{ 
		if(FindChar(IthChar(reszta,i),reszta,0) == i){
			for(i = 0; i<l; i++){
			np = Concat(pocz, CharToString(IthChar(reszta,i)));
			nr = Concat(SubString(reszta,0,i-1),SubString(reszta,i+1,l));
			if(StringLength(nr) == 0) printf("%s\n", np);
			WP0(np,nr);
			}
		}
	}
}

void permutacje (string s){
	WP0("",s);
}

int main (int argc, char* argv[]){
	int l;
	if(argc < 1) return 1;
	permutacje(argv[1]);
}
