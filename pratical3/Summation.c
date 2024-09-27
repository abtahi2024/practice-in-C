#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ara[i];
    }
    if(sum<0)
    {
        sum=sum*-1;
    }
    printf("%lld",sum);
    return 0;
}