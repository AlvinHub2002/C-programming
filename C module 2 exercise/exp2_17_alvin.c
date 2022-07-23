/*********************************************************************************************************************
* File           :  Experiment 2.17                                             
* Description    :  C program to find area and perimeter of rectangle and to find if area is greater than perimeter                         
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  12/06/2021                                                
***********************************************************************************************************************/
#include<stdio.h>
int main()
{
    int length,breadth,area=0,perimeter=0;
    printf("ENTER THE LENGTH OF THR RECTANGLE:\t");
    scanf("%d",&length);
    printf("ENTER THE BREADTH OF THE RECTANGLE:\t");
    scanf("%d",&breadth);
    area=length*breadth;           //calculating area
    perimeter=2*(length+breadth);    //calculating perimeter
    printf("THE AREA IS : %d",area);
    printf("\nTHE PERIMETER IS : %d",perimeter);
    if(area>perimeter){
        printf("\nAREA IS GREATER THAN THE PERIMETER!"); 
    }
    else
    printf("\nPERIMETER IS GREATER THAN THE AREA!");
    return 0;
}