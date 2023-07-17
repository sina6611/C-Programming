#include <stdio.h>
#include <math.h>

float  Komparator (float h, float w){

    float BMI=h/pow(w,2)*100;
    return BMI;
}  
int main() {
 float h,v;
 puts("Bitte geben Sie Ihr Große ein");
 scanf("%f",&h);
 puts("Bitte geben Sie Ihr Gewicht ein");
 scanf("%f",&v);
 float BMI=Komparator(h,v);
 printf(" %f", BMI);


    return 0;
}
