#include <stdio.h>
int main()
{
   int licz1,licz2;

   printf("Podaj pierwsza liczbe: \n");
   scanf("%d", &licz1);
   printf("Podaj druga liczbe: \n");
   scanf("%d", &licz2);
   if (licz1>licz2) printf("%d%s%d\n", licz1 , " jest wieksza od ", licz2); 
   if (licz2>licz1) printf("%d%s%d\n", licz2 , " jest wieksza od ", licz1);
   if (licz1==licz2) printf("%d%s%d%s\n" , licz1 , " i " , licz2, " sa rowne");
   return 0;
}
