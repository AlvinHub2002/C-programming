/********************************************************************************
* File           :  Experiment 2.20                                                   
* Description    :  C program to check if igven 3 points lie in a straight line                                
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  12/06/2021                                                
*********************************************************************************/
#include<stdio.h>
#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float slope1,slope2;
    printf("ENTER COORDINATES OF POINT 1 :\n");
    printf("x1 :\t");
    scanf("%d",&x1);
    printf("y1 :\t");
    scanf("%d",&y1);
     printf("ENTER COORDINATES OF POINT 2 :\n");
    printf("x2 :\t");
    scanf("%d",&x2);
    printf("y2 :\t");
    scanf("%d",&y2);
    printf("ENTER COORDINATES OF POINT 3 :\n");
    printf("x3 :\t");
    scanf("%d",&x3);
    printf("y3 :\t");
    scanf("%d",&y3);
    //checking the slopes 
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2)
    printf("THE POINTS ARE IN A STRAIGHT LINE");
    else
    printf("THE POINTS ARE  NOT IN A STRAIGHT LINE");
    return 0;
}