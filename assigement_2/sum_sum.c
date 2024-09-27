#include<stdio.h>
int main()
{
    int n;
    int pos_sum=0;
    int neg_sum=0;
    scanf("%d",&n);
    int ara[n];
    for(int i;i<=n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]>0)
        {
            pos_sum+=ara[i];
        }
        else if(ara[i]<0)
        {
            neg_sum+=ara[i];
        }

    }
    printf("%d %d ",pos_sum,neg_sum);


    
    return 0;
}