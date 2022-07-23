/******************************************************************************************************************
* File           :  Experiment 2.13                                               
* Description    :  C program to print electricity bill                            
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  12/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    unsigned long long customerID;
    char name[20];
    int unit;
    float totalAmount;
    
    printf("ENTER YOUR NAME:\t");
    gets(name);
    printf("ENTER YOUR CUSTOMER ID:\t");
    scanf("%llu",&customerID);
    printf("ENTER THE UNIT CONSUMED:\t");
    scanf("%d",&unit);
    //calculating amount per unit
    if(unit<=199)
    {
        totalAmount=unit*1.20;

    }
    else if((unit<400)&&(unit>=200))
    {
        totalAmount=unit*1.50;
    }
    else if((unit>=400)&&(unit<600))
    {
        totalAmount=unit*1.80;
    }
    else
    totalAmount=unit*2.00;
    printf("\t\t\tELECTRICITY BILL");
    printf("\nNAME          :\t%s",name);
    printf("\nCUSTOMER ID   :\t%llu",customerID);
    printf("\nUNIT CONSUMED :\t%d",unit);
    printf("\nTOTAL         :\t%.2f",totalAmount);
       if (totalAmount>400)
   {
       totalAmount=totalAmount+(0.15*totalAmount);        //adding surcharge
   }
   else if(totalAmount<100)
   totalAmount=100;
   else
   totalAmount=totalAmount;
   printf("\nTOTAL AMOUNT TO BE PAID(including surcharges :\t%.2f",totalAmount);
    return 0;
}
