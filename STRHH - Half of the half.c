#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m=0,z;
    float l;
    scanf("%d",&k);
    char str[100][k];
    while(m<k)
    {
        scanf("%s",str[100][m]);
        m++;
    }
        for(j=0;j<m;j++)
        {
            l=strlen(str[][j]);
            l=l/2;
            z=(int)l;
            if(z!=l)
            {
                z=z+l;
            }
            for(i=0;i<z;i++)
            {
            if(i%2==0)
                printf("%c",str[i][j]);
            }
        }
 return 0;
}
