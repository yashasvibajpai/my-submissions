#include<stdio.h>
void main()
{
   long long n,i,j,f=0,o,t;
   scanf("%lld",&t);
   while(t)
   {
   for(i=n+1;i<=100;i++)
   {
      scanf("%lld",&n);
      f=0;
      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            f=1;
            break;
         }
      }
      if(f==0)
      {
         printf("%lld\n",i);
         break;
      }
   }
   t--;
   }
}


