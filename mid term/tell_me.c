#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    // while (t--)
    for(int t=0;t<T;t++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);


        int v=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                v=1;
                break;
            }
        }
        if(v)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    
    }


    


    return 0;
    

}



// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T); // Read the number of test cases

//     for (int t = 0; t < T; t++) {
//         int N;
//         scanf("%d", &N); // Read the size of the array
//         int A[N];

//         for (int i = 0; i < N; i++) {
//             scanf("%d", &A[i]); // Read the elements of the array
//         }

//         int X;
//         scanf("%d", &X); // Read the value to check

//         int found = 0; // Flag to check if X is found

//         for (int i = 0; i < N; i++) {
//             if (A[i] == X) {
//                 found = 1;
//                 break; // X is found, exit the loop
//             }
//         }

//         if (found) {
//             printf("YES\n");
//         } else {
//             printf("NO\n");
//         }
//     }

//     return 0;
// }









// #include <stdio.h>

// int main() {
//     int T; // Number of test cases
//     scanf("%d", &T);

//     while (T--) {
//         int N; // Size of the array
//         scanf("%d", &N);

//         int A[10000]; // Assuming a maximum array size of 10000
//         for (int i = 0; i < N; i++) {
//             scanf("%d", &A[i]); // Read the array elements
//         }

//         int X; // Integer value to check
//         scanf("%d", &X);

//         int found = 0; // Flag to check if X is found in the array

//         // Loop through the array to check if X is present
//         for (int i = 0; i < N; i++) {
//             if (A[i] == X) {
//                 found = 1; // Set the flag to 1 if X is found
//                 break; // No need to continue searching
//             }
//         }

//         if (found) {
//             printf("YES\n"); // X is found in the array
//         } else {
//             printf("NO\n"); // X is not found in the array
//         }
//     }

//     return 0;
//}
