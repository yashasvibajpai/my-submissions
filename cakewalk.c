#include<stdio.h>
int main()
{
	int rem;
	int n,count=0;
	scanf("%d",&n);
		while(n)
		{
			rem=n%2;
			n=n/2;
			if(rem==1)
				count++;
		}
	printf("%d",count);
	return 0;
}
