/******************************************************************************************************************
* File           :  Experiment 2.12                                               
* Description    :  C program to check if a triangle is valid or not                            
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,sumOfAngles=0;
    printf("ENTER THE FIRST ANGLE :\t");
    scanf("%d",&angle1);
    printf("ENTER THE SECONDANGLE :\t");
    scanf("%d",&angle2);
    printf("ENTER THE THIRD  ANGLE :\t");
    scanf("%d",&angle3);
    sumOfAngles=angle1+angle2+angle3;
    if(sumOfAngles==180)         //checking condition for a valid triangle
    printf("YOU HAVE ENTERED A VALID TRAIANGLE");
    else
    printf("THE TRIANGLE ENTERED IS IN VALID!");
    return 0;
}