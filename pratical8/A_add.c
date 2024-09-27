#include<stdio.h>
void sum(int x,int y)
{
    int a=x+y;
    printf("%d ",a);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}