//Write a C program to find the maximum between three numbers. 

#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d", &a, &b, &c ); // take three input 
if(a>b && a>c)
{
    printf("Minimum = %d", a);
}
else if (b>c & b>a) 
{
    printf("Max = %d", b);
}

else
{
    printf("Max = %d", c);
}
}