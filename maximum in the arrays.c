//finding the maximum and minimum//
#include<stdio.h>
int main()
{
    int a[10],n,i,max;
    printf("to print the maix and minimum numbers");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
   for(i=0;i<=n;i++)
   {
       if(a[i]>max)
       max=a[i];
       
   }
   printf("the maximum value is%d",max);
   return 0;
}

