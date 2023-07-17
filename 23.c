#include <stdio.h>
#include <math.h>


int main() {
 int base, power;
 puts("Bitte geben Sie Base ein");
 scanf("%d",&base);
 puts("Bitte geben Sie power ein");
 scanf("%d",&power);
 int ergebnis=pow(base,power);
 printf("Math-Operation-Ergebnis ist gleich= %d",ergebnis);   

    return 0;
}
