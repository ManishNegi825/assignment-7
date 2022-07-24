/*Write a program to find next Prime number of a given number */
#include<stdio.h>
int main()
{
   int n,i,j,flag=0;
   printf("enter the num\n");
   scanf("%d",&n);
      for(i=n+1;i<=100;i++)
   {
        flag=0;
         for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
         if(flag==0)
      {
         printf("next prime is:%d",i);
         break;
      }
   }
   return 0;
}