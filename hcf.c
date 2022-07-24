/*Write a program to calculate HCF of two numbers ?*/
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
    printf("HCF value is %d ",hcf);
    return 0;
}