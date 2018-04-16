#include<stdio.h>
void main()
{
    long long t,n,i,j;
    scanf("%lld",&t);
    while(t)
    {
     scanf("%lld",&n);
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }

        if(j==i)
        {
            printf("%lld\n",i);
            break;
        }
    }
     t--;
    }
}
