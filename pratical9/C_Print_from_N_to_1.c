#include<stdio.h>
void fun(int n)
{
    if(n==0)return;
    if(n==1)
    {
        printf("1");
    }
    else
    {
    printf("%d ",n);
    }
    fun(n-1);
    // fun(i+1,n);

}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;

}
// #include <stdio.h>

// void fun(int n) {
//     if (n == 0) return;
//     printf("%d ", n);
//     fun(n - 1);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     fun(n);
//     return 0;
// }


