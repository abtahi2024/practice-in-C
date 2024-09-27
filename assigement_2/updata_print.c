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
    int x,v;
    scanf("%d %d",&x,&v);
    ara[x]=v;
    for(int i=n-1;i>=0;i--)
    {
         printf("%d ",ara[i]);
        
    }
    
    return 0;

 }
