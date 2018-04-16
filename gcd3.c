#include<stdio.h>
int gcd(long long int a,long long int b)
{
   if(b==0)
        return a;
  return gcd(b,a%b);
}
int three_gcd(long long int a,long long int b,long long int c)
{
  return gcd(a,gcd(b,c));
}
int main()
{
    long long int a,b,c,gc;
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);
    gc=three_gcd(a,b,c);
    printf("%lld\n",gc);
    return 0;
}
