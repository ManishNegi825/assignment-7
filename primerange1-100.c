/*Write a program to print all Prime numbers under 100 ? */
#include<stdio.h>
int main()
{
    int i,num;
    for(num=1;num<=100;num++)
    {
        for(i=2;i<=100;i++)
        {
            if(num%i==0)
            break;
        }
        if(num==i||num==1)
        printf("%d  ",num);
    }
             return 0;
}