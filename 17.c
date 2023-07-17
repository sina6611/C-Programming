#include <stdio.h>

int main() {
    char a = 'y';

    while (a == 'y') {
        // Your program logic here

        printf("Do you want to repeat the program? (y/n):\n ");
        scanf(" %c", &a);
    }

    return 0;
}
