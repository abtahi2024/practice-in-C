#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count2=0;
    int count3=0;
    // int count3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count2++;
        }
        if(a[i]%3==0 && a[i]%2!=0)//a[i]%2!=0
        {
            count3++;
        }
        // else if(a[i]%3==0)
        // {
        //     count3++;
        // }
    }

    printf("%d %d\n",count2,count3);

    

    return 0;
}



// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N); // Input the size of the array

//     int A[N]; // Declare an array of size N

//     // Input the elements of the array
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }

//     int countDivisibleBy2 = 0;
//     int countDivisibleBy3 = 0;

//     // Count elements divisible by 2 and 3
//     for (int i = 0; i < N; i++) {
//         if (A[i] % 2 == 0 && A[i] % 3 != 0) {
//             countDivisibleBy2++;
//         }
//         if (A[i] % 3 == 0) {
//             countDivisibleBy3++;
//         }
//     }

//     // Output the counts
//     printf("%d %d\n", countDivisibleBy2, countDivisibleBy3);

//     return 0;
// }

