/* Write a program to check whether a given number is there in the Fibonacci series or not ?*/
#include<stdio.h>
int main()
{
    int i,num,pre=0,post=1,nxt;   
    printf("enter your number ");
    scanf("%d",&num); 
    for(i=1;i<=num+5;i++)
    {
        if(pre==num)
        {
            printf("The entered number is avaible at %dth term ",i);
            break;
        }
        
        nxt=pre+post;
        pre=post;
        post=nxt;
    }
        if (pre!=num) 
    {
        printf("Entered number is not avaible in fibonaaci series ");
    }
    return 0;
}