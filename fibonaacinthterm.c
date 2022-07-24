/*Write a program to find the Nth term of the Fibonnaci series. */
#include<stdio.h>
int main()
{
    int i,n,pre=0,post=1,nxt;
    printf("enter the value of n ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      
        nxt=pre+post;
        pre=post;
        post=nxt;
    }
    printf("The Nth term of the program is %d ",pre);
    return 0;
}