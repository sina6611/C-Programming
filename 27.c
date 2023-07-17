
#include <stdio.h>
#include <math.h>

void Komparator (float h, float w){

    float BMI=h/pow(w,2)*100;
    printf(" %f", BMI);
}  
int main() {
 float h,v;
 puts("Bitte geben Sie Ihr Große ein");
 scanf("%f",&h);
 puts("Bitte geben Sie Ihr Gewicht ein");
 scanf("%f",&v);
 Komparator(h,v);


    return 0;
}
