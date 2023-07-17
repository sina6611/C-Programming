#include <stdio.h>

int main() {
    int n=0;
    char a='y';
    do{

        n+=1;
        puts("Do you want to continiue?");
        scanf(" %c ", &a );
        printf("Ergebniss is gleich= %d\n",n);
    }
    while (a=='y');
    
    
    

    return 0;
}

