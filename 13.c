#include<stdio.h>
#include<stdlib.h>
int main(){
int age;
float weghit;
float height;
puts("Enter Age");
scanf("%d",&age);
puts("Enter weight");
scanf("%f",&weghit);
puts("Enter height");
scanf("%f",&height);
if((weghit/height)*100>2){

    puts("You are overweight");
    
}
else{
    puts("You are under weight");
}

}