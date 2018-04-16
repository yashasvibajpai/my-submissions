#include<stdio.h>
int main()
{
    int t,i,j;
    long int n;
    scanf("%d",&t);
    while(t>0)
    {
        int flag1,flag2;
        scanf("%ld",&n);
        long int l[n],g[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&l[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%ld",&g[i]);
        }
        for(i=0;i<n;i++)
        {

            if(l[i]<=g[i])
            {
                flag1=1;
            }
            else
            {
                flag1=0;
                break;
            }

        }
        for(i=0,j=n-1;i<n,j>=0;i++,j--)
        {
            if(l[i]<=g[j])
            {
                flag2=1;
            }
            else
            {
                flag2=0;
                break;

            }
        }

        if(flag1==1 && flag2==1)
        {
           printf("both\n");
        }
        else if(flag1==1&&flag2==0)
        {
            printf("front\n");
        }
        else if(flag2==1&&flag1==0)
        {
            printf("back\n");
        }
        else if(flag1==0&&flag2==0)
        {
            printf("none\n");
        }
        t--;

    }
    return 0;
}
