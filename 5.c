#include<stdio.h>
#include<stdlib.h>
int main(){
const float G = 9.8;
float v_0=0;
unsigned int t=0;
float x0=0;
float X=1/2*G*t*t+x0;
printf("X=1/2*%f*%d^2+%f=%f", G,t,v_0,t,x0);

}