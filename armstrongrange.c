#include<stdio.h>
#include<math.h>
int main()
{   
    int i,num,sum=0,count=0;
    for(i=1;i<=1000;i++)
    {
        num=i;
        while(num!=0)
      {
        num=num/10;  
        count++;
      }
      num=i;
      sum=pow(num%10,count)+pow((num%100-num%10)/10,count)+pow((num%1000-num%100)/100,count);
        if(sum==i)
        printf("%d ",i);
        count=0;
    }
    return 0;
}