/******************************************************************************************************************
* File           :  Experiment 2.8                                                   
* Description    :  C program to check if a entered year is leap year or not                                  
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
#include <stdio.h>

int main() {
   int year;
   printf("ENTER THE YEAR :\n");
   scanf("%d",&year);
   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))  //checking conditions for leap year
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);

   return 0;
}