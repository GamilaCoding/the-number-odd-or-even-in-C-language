#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d" , &N);
    if(N % 2 == 0){
        printf("The number is even");
    } else{
        printf("The number is odd");
    }
}