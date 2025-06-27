#include <stdio.h>

int main() {
   int anonasc, anomillenial;

   scanf("%d", &anonasc);

   anomillenial= (2025 - anonasc)*2;
   anomillenial= 2025 - anomillenial;

   printf("%d", anomillenial);

   return 0;
}