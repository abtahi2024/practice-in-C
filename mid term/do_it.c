#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);  
        }

        printf("\n");

    }

    return 0;
}




// #include <stdio.h>

// int main() {
//     int N, K;
//     scanf("%d %d", &N, &K); // Read N and K from input

//     for (int i = 0; i < N; i++) { // Outer loop for N times
//         for (int j = 1; j <= K; j++) { // Inner loop to print from 1 to K
//             printf("%d ", j);
//         }
//         printf("\n"); // Print a new line after printing 1 to K
//     }

//     return 0;
// }
