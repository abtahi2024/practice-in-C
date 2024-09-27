#include<stdio.h>
void fun(void)
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    if(i<n)
    {
      printf("%d ",i);
    }
    else
    {
      printf("%d",i);
    }
    } 
    // printf("%d ",i);
    // return n;
}

int main()
{
    fun();
    // fun();
    // printf("%d",i);   
    
  return 0;
}




















// #include <stdio.h>

// void printNumbers(int N) {
//     for (int i = 1; i <= N; i++) {
//         printf("%d ", i);
//     }
// }

// int main() {
//     int N;
//     scanf("%d", &N);
    
//     printNumbers(N);

//     return 0;
// }
