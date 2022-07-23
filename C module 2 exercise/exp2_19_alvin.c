/***********************************************************************
* File           :  Experiment 2.19                                                   
* Description    :  C program to check if a character is vowel or not                                   
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  12/06/2021                                                
***********************************************************************/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case'a':
    case'A':
    case'e':
    case'E':
    case'i':
    case'I':
    case'o':
    case'O':
    case'u':
    case'U':
      printf("The entered character is a vowel");
        break;
    default:
     printf("Entered character is not a vowel");
        
    }
    return 0;
}