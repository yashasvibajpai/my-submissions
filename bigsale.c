#include<stdio.h>
int main()
{
    int n,q,i,l,r;
    scanf("%d %d",&n,&q);
    long long int j,a[n],max=0,xorsum, el;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(q)
    {
        scanf("%d %d",&l,&r);
        for(j=0;j<2147483648;j++)
        {
            xorsum=0;
            for(i=l-1;i<r;i++)
            {
                xorsum+=a[i]^j;
            }
            if(xorsum>max)
            {
                max=xorsum;
                el = j;
            }
        }
        printf("%lld",el);
        q--;
    }
    return 0;
}
