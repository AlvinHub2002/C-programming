/*********************************************************************************************************************
* File           :  Experiment 2.18                                             
* Description    :  C program to Print descripition according to the entered grade                         
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  12/06/2021                                                
***********************************************************************************************************************/
#include<stdio.h>
int main()
{
    char grade;
    printf("ENTER THE grade :\t");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'E':
    printf("EXCELLENT!");
    break;
    case 'V':
    printf("VERY GOOD!");
    break;
    case 'G':
    printf("GOOD");
    break;
    case 'A':
    printf("AVERAGE");
    break;
    case 'F':
    printf("FAIL");
    break;
    default:
    printf("INVALID INPUT!");
    break;
    }
    return 0;
}