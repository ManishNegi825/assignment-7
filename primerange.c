/*Write a program to find next Prime number of a given number ? */
#include<stdio.h>
int main()
{
    int i,j,num1,num2;
    printf("Enter two numbers to get prime numbers between ");
    scanf("%d %d ",&num1 ,&num2);
    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<num2;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }    
    return 0;
}