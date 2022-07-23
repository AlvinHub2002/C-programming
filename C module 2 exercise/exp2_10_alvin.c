/******************************************************************************************************************
* File           :  Experiment 2.10                                                 
* Description    :  C program to print the youngest of three                            
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
#include<stdio.h>
int main()
{
    int RamAge,ShyamAge,AjayAge;
    printf("ENTER THE AGE OF RAM :\t");
    scanf("%d",&RamAge);
    printf("ENTER THE AGE OF SHYAM :\t");
    scanf("%d",&ShyamAge);
    printf("ENTER THE AGE OF AJAY:\t");
    scanf("%d",&AjayAge);
    //checking the codition for the youngest
    if((RamAge<ShyamAge)&&(RamAge<AjayAge))
    printf("RAM IS THE YOUNGEST ");
    else if(ShyamAge<AjayAge)
    printf("SHYAM IS THE YOUNGEST");
    else if(AjayAge<ShyamAge)
    printf("AJAY IS THR YOUNGEST");
    else
    printf("ALL ARE OF SAME AGE");
    return 0;
}