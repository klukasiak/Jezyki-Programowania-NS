/*
 * Krystian Łukasiak 20.01.18
 */
#include <stdio.h>
#include <string.h>
 
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}
 
int main()
{
    FILE *fin;
	if ((fin=fopen("litery.txt", "r"))==NULL) {
		printf ("Nie mogę otworzyć pliku ulysses.txt do odczytu!\n");
		return 1;
	}
	char str[1000];
	fscanf(fin, "%s", str);
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
