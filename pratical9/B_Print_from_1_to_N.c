#include<stdio.h>
void fun(int n,int i)
{
    if(i==n)return;
    printf("%d\n",i+1);
    fun(n,i+1);
    // fun(i+1,n);

}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,0);
    return 0;

}