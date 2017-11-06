#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   for(int i = 4; i>=0; i--){
   printf("%d%s" , tabela[i], " ");
   }
   printf("\n");
   return 0;
}
