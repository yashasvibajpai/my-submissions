#include<stdio.h>
int main()
{
    int n,i,j,k,flag=0;
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j]==i)
            {
                for(k=j;k<n;k++)
                {
                    if(arr[k]==j)
                    {
                         printf("YES\n");
                         flag=1;
                    }
                }
            }
        }
    }
    if(flag==0)
        printf("NO");
  return 0;
}
