//Write a C program to check whether a year is a leap year or not.

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
  
   if (year % 400 == 0) // leap year if divisible by 400
   {
      printf("%d is a leap year.", year);
   }
    // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0)   
   {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   else // all other years are not leap years
   {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
