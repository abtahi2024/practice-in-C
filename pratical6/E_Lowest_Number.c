#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=a[0];
    int low_pos=1;
    for (int i = 0; i <n; i++)
    {
        if(a[i]<low)
        {
            low=a[i];
            low_pos=i+1;
        }
    }
    printf("%d %d\n",low,low_pos);
     
    


    return 0;
}