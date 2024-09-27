#include<stdio.h>
#include<stdlib.h>
int my_abs(int n)
{
    if(n<0)
    {
        return abs(n);
    }
    // else
    // {
    //     return n;
    // }
}
int main()
{
    int a;
    scanf("%d",&a);
    int m=my_abs(a);
    printf("%d",m);
    return 0;
}
// #include <stdio.h>

// // Function to calculate absolute value
// int my_abs(int num) {
//     if (num < 0) {
//         return -num;
//     } else {
//         return num;
//     }
// }

// int main() {
//     // Sample Input
//     int value1 = 5;
//     int value2 = -7;

//     // Calculate absolute values
//     int result1 = my_abs(value1);
//     int result2 = my_abs(value2);

//     // Sample Output
//     printf("%d\n", result1);  // Output: 5
//     printf("%d\n", result2);  // Output: 7

//     return 0;
// }
