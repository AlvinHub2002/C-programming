/******************************************************************************************************************
* File           :  Experiment 2.14                                               
* Description    :  C program to print the absolute value of a number                           
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER :\n");
    scanf("%d",&number);
    if (number<0){
    number=number*(-1);          //converting to absolute value
    printf("THE ABSOLUTE VALUE IS : %d",number);
    }
    else
    printf("THE ABSOLUTE VALUE IS : %d",number);
    return 0;
}