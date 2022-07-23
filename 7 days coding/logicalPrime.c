/**************************************************************************
* File           :  Experiment 1                                                    
* Description    :  C program to return logic value by checking prime                                    
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  22/06/2021                                              
****************************************************************************/
#include<stdio.h>
int check_prime(int);
 int main()
{
   int number, result;
   printf("Enter the number to check if it is prime or not.\n");
   scanf("%d",&number);
   result = check_prime(number);
   if ( result == 1 )
      printf("TRUE");
   else
      printf("FALSE");
   return 0;
}
int check_prime(int n)
{
   int i;
   for ( i = 2 ; i <= n- 1 ; i++ )
   { 
      if ( n%i== 0 )
     return 0;
   }
    return 1;
}
