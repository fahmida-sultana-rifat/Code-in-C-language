//Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main ()
{
    int num;
    printf("Enter the value = ");
    scanf("%d", &num);
    if (num%5==0 && num%11==0) //5 & 11 replace according to requirment.
    {
        printf("Divisible");
    }
    else
    {
        printf(" Not Divisible");
    }
}
