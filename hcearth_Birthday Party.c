#include<stdio.h>
int main()
{
    int i=0,t,j;
    scanf("%d",&t);
    int n[t],m[t];
    while(t)
    {

        scanf("%d %d",&n[i],&m[i]);
        i++;
        t--;
    }
    for(j=0;j<i;j++)
    {
        if(m[j]%n[j]==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
