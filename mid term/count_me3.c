#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
   
        {
         char S[10005];
         scanf("%s",S);
    
         int capitalCount = 0;
         int smallCount = 0;
         int digitCount = 0;
         
         for(int i=0;i<strlen(S);i++)
        {
            char val=S[i];
         if(S[i]>='A' && S[i]<='Z')
        {
            capitalCount++;
        }
        else if(S[i]>='a' && S[i]<='z')
        {
            smallCount++;
        }
        else if(S[i]>='0' && S[i]<='9')
        {
            digitCount++;
        }

        }

         
      printf("%d %d %d\n",capitalCount,smallCount,digitCount);

        }
    

   
    return 0;

}



// #include <stdio.h>
// #include <string.h>

// int main() {
//     int T; // Number of test cases
//     scanf("%d", &T);

//     while (T--) {
//         char S[10001]; // Maximum string length is 10,000
//         scanf("%s", S);

//         int capitalCount = 0;
//         int smallCount = 0;
//         int digitCount = 0;

//         // Iterate through each character in the string
//         for (int i = 0; i < strlen(S); i++) {
//             char currentChar = S[i];

//             if (currentChar >= 'A' && currentChar <= 'Z') {
//                 capitalCount++;
//             } else if (currentChar >= 'a' && currentChar <= 'z') {
//                 smallCount++;
//             } else if (currentChar >= '0' && currentChar <= '9') {
//                 digitCount++;
//             }
//         }

//         // Output the counts
//         printf("%d %d %d\n", capitalCount, smallCount, digitCount);
//     }

//     return 0;
// }
