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
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    int frqe=0;
    for(int i=0;i<n;i++)
    {
    if(a[i]==min)
    {
        frqe++;
    }
    }
    if(frqe%2==1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}