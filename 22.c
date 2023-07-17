#include <stdio.h>

int main() {
    int A;
  puts("Bitte wählen Sie von Menü ein Essen");
  scanf(" %d", &A);
  switch (A)
  {
  case 0:
    puts("Sie haben Käse ausgewählt");
    break;
  case 1:
   puts("Sie haben Fleisch ausgwäht");
   break;
  default:
    puts("Es gibt momentan keine Speiße ");
    break;
  }
  

    

    return 0;
}
