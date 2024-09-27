#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
       long long int d=m/(a*b*c);
    //    long long int d;
    //    d=m/a,d=m/b,m/c;
        if(a*b*c*d==m)
        {
            printf("%lld\n",d);
        }
        else
        {
            printf("-1\n");
        }
        
    }
    return 0;
}