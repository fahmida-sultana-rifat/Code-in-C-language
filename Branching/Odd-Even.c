// Write a C program to check whether a number is even or odd.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the Number = ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("Even");
    }
    else 
    {
        printf("Odd");
    }

    return 0;
}
