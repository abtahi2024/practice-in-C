#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    int min=1000000006;
    int mincnt=0;
    int v;
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&v);
        if(v<min)
        {
        min=v;
        mincnt=1;
        }
        else if(v==min)
        {
            mincnt++;
        }
    }
    if(mincnt%2==1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
    

    
}