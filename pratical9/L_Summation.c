#include<stdio.h>
 long long int fun(long long int a[],long long int n,long long int i)
{
    if(i==n)return 0;
    // printf("%d",sum);
    long long int sum=a[i]+fun(a,n,i+1);
    return sum;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum=fun(a,n,0);

    printf("%lld",sum);

    return 0;
}