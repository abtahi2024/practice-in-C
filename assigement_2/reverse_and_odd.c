#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(int i=n-1;i>=0;i--)
    if(i%2!=0)//(i%2==01)
    {
        printf("%d ",ara[i]);
    }
    // else if(i%2==1)
    // {
    //     printf("%d ",ara[i]);
    // }




    return 0;
}