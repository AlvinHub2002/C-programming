/******************************************************************
* File           :  Experiment 2.4                                                   
* Description    :  C program to find whether it is profit or loss                                     
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  08/06/2021                                                
*******************************************************************/
#include<stdio.h>
int main()
{
    float sp,cp;
    float profit,loss;
    printf("ENTER THE COST PRICE:\n");
    scanf("%f",&cp);
    printf("ENTER THE SELLING PRICE:\n");
    scanf("%f",&sp);
    if(sp>cp)
    {

     profit=sp-cp;      //calculating profit
     printf("HE HAS A PROFIT OF : %f",profit );
    }
    else if(cp>sp)
    {
        loss=cp-sp;      //calculating loss
        printf("HE HAS A LOSS OF : %f",loss);
    }
    else
    printf("HE HAS NEITHER PROFIT NOR LOSS..");
    return 0;
    

}