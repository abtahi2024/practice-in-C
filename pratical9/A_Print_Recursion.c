#include<stdio.h>
void fun(int n)
{
    if(n==0)return;
   printf("I love Recursion\n");
   fun(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    fun(n);
    return 0;
}

