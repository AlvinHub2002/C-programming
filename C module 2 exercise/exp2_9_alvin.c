/******************************************************************************************************************
* File           :  Experiment 2.9                                                   
* Description    :  C program to print the type of temperature                              
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  11/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    float temperature;
    printf("ENTER THE TEMPERATURE IN CENTIGRADE \t");
    scanf("%f",&temperature);
    if(temperature<0)
    printf("Freezing weather");
    else if(temperature<10)
    printf("Very Cold weather");
    else if(temperature<20)
    printf(" Cold weather");
    else if(temperature<30)
    printf("Normal in Temp");
    else if (temperature<40)
    printf(" Its Hot");
    else
    printf("Its Very Hot");
    return 0;
}