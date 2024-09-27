#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        for(int i=0;i<n;i++)
        {
            {
                for(int j=0;j<n;j++)
                if(b[i]<b[j])
                {
                    int tmp=b[i];
                    b[i]=b[j];
                    b[j]=tmp;

                }
            }
        
        }
        for(int i=0;i<n;i++)
    {
        c[i]=abs(a[i]-b[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");

    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int compare(const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }

// int main() {
//     int T;
//     scanf("%d", &T);

//     while (T--) {
//         int N;
//         scanf("%d", &N);
//         int A[N], B[N], C[N];

//         // Read elements of array A
//         for (int i = 0; i < N; i++) {
//             scanf("%d", &A[i]);
//             B[i] = A[i]; // Create a copy of A
//         }

//         // Sort array B in ascending order
//         qsort(B, N, sizeof(int), compare);

//         // Calculate the absolute differences and store them in array C
//         for (int i = 0; i < N; i++) {
//             C[i] = abs(A[i] - B[i]);
//         }

//         // Print the elements of array C
//         for (int i = 0; i < N; i++) {
//             printf("%d ", C[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
