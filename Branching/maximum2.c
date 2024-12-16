//Write a C program to find the maximum between two numbers. 

#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d", &a, &b); // take 2 digit input 
if(a>b)
{
    printf("Max = %d", a);
}
else 
{
    printf("Max = %d", b);
}
}