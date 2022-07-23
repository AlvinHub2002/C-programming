/******************************************************************************************************************
* File           :  Experiment 2.11                                               
* Description    :  C program to print the type of triangle                            
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("ENTER THE FIRST SIDE : \t");
    scanf("%d",&side1);
    printf("ENTER THE SECOND SIDE : \t");
    scanf("%d",&side2);
    printf("ENTER THE THIRD SIDE : \t");
    scanf("%d",&side3);
    if((side1==side2)&&(side1==side3))
    printf("THE ENTERED TRIANGLE IS AN EQUILATERAL TRIANGLE");  //condition for equilateral triangle
    else if((side1==side2)||(side1==side3)||(side2==side3))
    printf("THE ENTERED TRIANGLE IS AN ISOSCELES TRIANGLE");    //condition for isoceles triangle
    else
    printf("THE ENTERED TRIANGLE IS A SCALENE TRIANGLE");
    return 0;
}