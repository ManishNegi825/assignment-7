#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,remain,sum=0,count=0;
    printf("Enter a number to check number is  armstorng or not ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp/=10;
        count++;
    }
    temp=num;
    while(temp!=0)
    {
        remain=temp%10;
        sum+=pow(remain,count);
        temp/=10;
    }
    if(num==sum)
    printf("%d this is an armstrong number ",num);
    else
    printf("%d is not an armstrong number ");
    return 0;
}