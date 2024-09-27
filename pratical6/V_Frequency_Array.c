#include<stdio.h>
// #include<string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[100001]={0};
    // int cnt[m+1];
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        cnt[val]++;
    }
    for(int i=1;i<=m;i++)
    {
        printf("%d\n",cnt[i]);
    }
    




    return 0;
}