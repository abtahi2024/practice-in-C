#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    scanf("%s",&S);
    int len=strlen(S);
    int ispalindrome=1;
    for(int i=0;i<strlen(S)/2;i++)
    if(S[i]!=S[len-i-1])
    {
    ispalindrome=0;
    break;
    }

     if(ispalindrome)
     {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
        return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[1001]; // Assuming the maximum length of the string is 1000
//     scanf("%s", s);

//     int len = strlen(s);
//     int isPalindrome = 1;

//     for (int i = 0; i < len / 2; i++) {
//         if (s[i] != s[len - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
