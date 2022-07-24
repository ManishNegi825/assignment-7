/*Write a program to check whether two given numbers are co-prime numbers or not ? */
#include<stdio.h>
int main()
{
    int num1,num2,min,hcf=0,i;
    printf("Enter two number to find the HCF ");
    scanf("%d %d",&num1,&num2);
    min= num1<num2?num1:num2;
    for(i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        hcf=i;
    }
    if(hcf==1)
    printf("the entered numbers are co-prime numbers ");
    else
    printf("Entered numbers are not co-prime numbers ");
    return 0;
}