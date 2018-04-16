#include<stdio.h>
int main()
{
long int n1,flag=0,i,j;
scanf("%ld",&n1);
for(i=n1;i>0;i--)
{
for(j=2;j<(i/2);j++)
{
if(i%j==0)
{
flag=1;
}
else if(flag==1)
{
printf("%ld",i);
}
}
}
return 0;
}
