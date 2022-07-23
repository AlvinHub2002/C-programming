/******************************************************************************
* File           :  Experiment 2.3                                                   
* Description    :  C program to find if a person is eligible for casting vote                                    
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  08/06/2021                                                
*******************************************************************************/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    if(age>=18)
    printf("Congratulation! You are eligible for casting your vote");
    else
    printf("You are not eligible for casting your vote");
  return 0;

}