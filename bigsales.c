#include<stdio.h>
int main()
{
    long int i,t,n;
    scanf("%ld",&t);
    while(t)
    {
        double p,q,d,price,loss=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf %lf",&p,&q,&d);
            price=p;
            p+=(d/100)*p;
            p-=(d/100)*p;
            loss+=(price-p)*q;
        }
        printf("%lf\n",loss);
        t--;
    }
    return 0;
}
