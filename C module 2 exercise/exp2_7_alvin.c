/******************************************************************************************************************
* File           :  Experiment 2.7                                                   
* Description    :  C program to calculate total and percentage of 3 subjects and print output accordingly                                     
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  10/06/2021                                                
*******************************************************************************************************************/
#include<stdio.h>
int main()
{
    int rollno,mark1,mark2,mark3;
    float percentage=0,total=0;
    char name[20];
    printf("ENTER YOUR NAME:\n");
    gets(name);
    printf("ENTER YOUR ROLL NO:\n");
    scanf("%d",&rollno);
    printf("ENTER THE MARK OF FIRST SUBJECT(out of 100):\n");
    scanf("%d",&mark1);
    printf("ENTER THE MARK OF SECOND SUBJECT(out of 100):\n");
    scanf("%d",&mark2);
    printf("ENTER THE MARK OF THIRD SUBJECT(out of 100):\n");
    scanf("%d",&mark3);
    total=(mark1+mark2+mark3);                   //calculating total
    printf("\ntotal is :%f \n",total);         
    percentage=(total/300)*100;                //calculating percentage
    printf("\npercentage is :%f \n",percentage);
    if(percentage>=75)
    printf( "\n %s You have acquired FIRST CLASS WITH DISTINCTION! ",name);
    else if((percentage>=60)&&(percentage<75))                                     //checking given conditions 
    printf(" \n %s You have acquired FIRST CLASS!",name);
    else 
    printf(" \n %s You have acquired SECOND CLASS",name);
    return 0;
}