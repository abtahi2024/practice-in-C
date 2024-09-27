#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int mus=a-b;
    if(mus>=0)
    {
        printf("%d\n",mus);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}