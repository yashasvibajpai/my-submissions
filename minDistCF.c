#include<stdio.h>
int main()
{
    int i,n,min,j,k,dist;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    min=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i]<min)
      {
        min=arr[i];
        k=i;
      }
      else if(arr[i]==min)
              j=i;

    }
    if(arr[0]!=min)
        dist=j-i+1;
    else
        dist=j;
    printf("%d",dist);
    return 0;



}
