#include <stdio.h>

int main() {
   int filhos, netos, totalnetos=0;

   scanf("%d", &filhos);

   for (int i=0; i<filhos; i++) {
       scanf("%d", &netos);
       totalnetos=totalnetos + netos;
   }

   printf("%d", totalnetos);

   return 0;
}
