#include<stdio.h>
void fun(int a[],int i,int n)
{
    if(i>n)
    {
    return;
    }
    if(i%2==0)
    {
        fun(a,i+2,n);
        printf("%d ",a[i]);
    }
    else 
    {
        fun(a,i+2,n);
    }
    

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,0,n-1);
    // printf

    return 0;
}

// #include <stdio.h>

// void printEvenIndicesReversed(int arr[], int start, int end) {
//     if (start > end) {
//         return;
//     }

//     if (start % 2 == 0) {
//         printEvenIndicesReversed(arr, start + 2, end);
//         printf("%d ", arr[start]);
//     } else {
//         printEvenIndicesReversed(arr, start + 2, end);
//     }
// }

// int main() {
//     int N;
//     scanf("%d", &N);

//     int arr[N];

//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printEvenIndicesReversed(arr, 0, N - 1);

//     return 0;
// }
