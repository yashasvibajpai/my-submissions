#include<stdio.h>
int main()
{
    int t,i,flag1=0,flag2=0,j;
    long int n;
    scanf("%d",&t);
    while(t)
    {
        scanf("%ld",&n);
        long int l[n],g[n];
        for(i=0;i<n;i++)
            scanf("%ld",&l[i]);
        for(i=0;i<n;i++)
            scanf("%ld",&g[i]);
        for(i=0;i<n;i++)
        {
                         //front case
            if(l[i]<=g[i])
            {
                flag1=1;
            }
            else
            {
                break;
            }

        }
        for(i=0,j=n-1;i<n,j>=0;i++,j--)
        {
            if(l[i]<=g[j])                      //back case
            {
                flag2=1;
            }
            else
            {
                break;
            }
        }
        if(flag1==1&&flag2==1)
        {
           printf("Both\n");
        }
        else if(flag1==1)
            printf("Front\n");
        else if(flag2==1)
            printf("Back");
        else if(flag1==0&&flag2==0)
            printf("None\n");
        t--;
    }
    return 0;

}
