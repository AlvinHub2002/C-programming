/*****************************************************************
* File           :  Experiment 2.6                                                   
* Description    :  C program to check if a number is odd or even                                  
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  08/06/2021                                                
*******************************************************************/
#include<stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(number%2==0)    //checking if even
    printf("the number is even");
    else
    printf("the number is odd");
    return 0;
}