/******************************************************************************************************************
* File           :  Experiment 2.15                                              
* Description    :  C program to print day with respect to number                         
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    int dayNumber;
    printf("ENTER THE DAY NUMBER :\t");
    scanf("%d",&dayNumber);
    switch (dayNumber)
    {
    case 1:
    printf("SUNDAY");
    break;
    case 2:
    printf("MONDAY");
    break;
    case 3:
    printf("TUESDAY");
    break;
    case 4:
    printf("WEDNESDAY");
    break;
    case 5:
    printf("THURSDAY");
    break;
    case 6:
    printf("FRIDAY");
    break;
    case 7:
    printf("SATURDAY");
    break;
    default:
    printf("INVALID INPUT!");
    break;
    }
    return 0;
}