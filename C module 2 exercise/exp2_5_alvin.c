/******************************************************************************
* File           :  Experiment 2.5                                                   
* Description    :  C program to check if eligible for the professional course                               
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  08/06/2021                                                
********************************************************************************/
#include<stdio.h>
int main()
{
    int maths,physics,chemistry,total=0,mathsphysics=0;
    printf("enter the mark in maths : \n");
    scanf("%d",&maths);
     printf("enter the mark in physics : \n");
    scanf("%d",&physics);
     printf("enter the mark in chemistry : \n");
    scanf("%d",&chemistry);
    total=maths+physics+chemistry;
    mathsphysics=maths+physics;
  if ( maths >= 65 && physics >= 55 && chemistry >= 50 && ( total >= 190 || mathsphysics >= 140)){    //checking condition
        printf("\nCONGRATULATIONS ! YOU ARE ELIGIBLE FOR THE COURSE"); 
    }
     else
     printf("YOU ARE NOT ELIGIBLE FOR THE COURSE...");
 return 0;

}