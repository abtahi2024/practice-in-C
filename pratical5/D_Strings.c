#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int lena=strlen(a);
    int lenb=strlen(b);
    printf("%d %d\n",lena,lenb);
    printf("%s%s\n",a,b,lena,lenb);

    char tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;

    printf("%s %s",a,b);


    return 0;


 }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char A[11], B[11];

//     // Read strings A and B
//     scanf("%s", A);
//     scanf("%s", B);

//     // Calculate the lengths of A and B
//     int lengthA = strlen(A);
//     int lengthB = strlen(B);

//     // Print the sizes of A and B separated by a space
//     printf("%d %d\n", lengthA, lengthB);

//     // Concatenate A and B and print the result
//     strcat(A, B);
//     printf("%s\n", A);

//     // Swap the first characters of A and B
//     char temp = A[0];
//     A[0] = B[0];
//     B[0] = temp;

//     // Print the swapped strings separated by a single space
//     printf("%s %s\n", A, B);

//     return 0;
// }
