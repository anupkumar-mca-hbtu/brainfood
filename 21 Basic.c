#include<stdio.h>
int main()
{
    int n,prime=1,i;
    scanf("%d",&n);
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            prime=0;
        }
    }
    if(prime)
    {
        printf("\nthe given number %d is  prime number",n);
    }
    else printf("\nthe number %d is  not prime",n);
    return 0;
}