#include <stdio.h>

int main() {
    int n;
    int count=0;
    printf("Please enter a number");
    scanf("%d",&n);

    while (count<n)
    {
        count += 1;
        printf(" %d ", count );
    }
    

    return 0;
}
