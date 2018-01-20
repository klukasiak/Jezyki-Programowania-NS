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
 
int main(int argc, char *argv[])
{
	if(argc <= 1) return 1;
	char str[1000];
	strcpy(str, argv[1]);
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
