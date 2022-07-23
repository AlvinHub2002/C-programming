/**************************
* File           :  Experiment 2.1                                                    
* Description    :  C program to demonstrate a calculator(+,-,*,/,%)                                      
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  08/06/2021                                                
**************************/
#include<stdio.h>
int main()
{
    int number1,number2;
    char operation;
    printf("enter the opertation to be caerried out:\n");
    scanf("%c",&operation);
    printf("enter two numbers:\n");
    scanf("%d%d",&number1,&number2);
    switch(operation)
    {
        case'+':
           printf("the sum is:%d",(number1+number2));
           break;
        case'-':
           printf("the difference is :%d",(number1-number2));
           break;
        case'*':
           printf("the product is :%d",(number1*number2));
           break;
        case'/':
           printf("the quotient is:%f",(float)(number1/number2));
           break;
        case'%':
          printf("the remainder is:%d",(number1%number2));

           break;
        default:
          printf("invalid input!!");
    }
    return 0;
}