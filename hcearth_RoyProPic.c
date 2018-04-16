#include<stdio.h>
int main()
{
    int i,l,n;
    scanf("%d",&l);
    scanf("%d",&n);
    int w[n],h[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w[i],&h[i]);
    }
    for(i=0;i<n;i++)
    {
        if(w[i]>l&&h[i]>l)
        printf("CROP IT\n");
        else if(w[i]==l&&h[i]==l)
        printf("ACCEPTED\n");
        else
        printf("UPLOAD ANOTHER\n");
    }
    return 0;
}
