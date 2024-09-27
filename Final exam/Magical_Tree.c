#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l=(n+1)/2+5;
    int k=1;
    int s=l-1;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<s;j++)
        {
          printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        printf("\n");
        k=k+2;
        s--;
        
        
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<((l*2)-1-n)/2;j++)
        {
            printf(" ");
        }
        for(int i=0;i<n;i++)
        {
            printf("*");
        }
        printf("\n");
    }
        return 0;
}
// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);

//     int line = (N + 1) / 2 + 5;
//     int star = 1;
//     int space = line - 1;

//     // Print the upper part (triangle)
//     for (int i = 0; i < line; i++) {
//         // Print spaces
//         for (int j = 0; j < space; j++) {
//             printf(" ");
//         }

//         // Print stars
//         for (int j = 0; j < star; j++) {
//             printf("*");
//         }

//         printf("\n");
//         star += 2;
//         space--;
//     }

//     // Calculate space for the lower part
//     space = ((line * 2) - 1 - N) / 2;

//     // Print the lower part
//     for (int i = 0; i < 5; i++) {
//         // Print spaces
//         for (int j = 0; j < space; j++) {
//             printf(" ");
//         }

//         // Print stars
//         for (int j = 0; j < N; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }









// #include <stdio.h>

// int main() {
//     int n;
//     // printf("Enter the height of the Christmas tree: ");
//     scanf("%d", &n);

//     // Upper part (triangle)
//     for (int i = 1; i <= (n - 1) / 2 + 6; i++) {
//         for (int j = 1; j <= (n - 1) / 2 + 6 - i; j++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower part
//     // int lowerWidth = (n - 1) / 2 + 6; // Width of the lower part matches the upper part
//     for (int i = 1; i <= 5; i++) {
//         // for (int j = 1; j <= (n - 1) / 2 + 6-2; j++) {
//         for (int j = 1; j <= 5; j++) {
//             printf(" ");
//         }
//         for (int j = 1; j <=n; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


