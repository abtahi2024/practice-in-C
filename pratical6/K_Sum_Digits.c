#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[1000001];
    // for(int i=0;i<n;i++)
        scanf("%s",a);
    int sum=0;
    for(int i=0;i<n;i++)
    //{
        sum+=a[i]-'0';
        // sum++;
    //}
    printf("%d",sum); 


    return 0;




}












// #include <stdio.h>

 // int main() {
 //     int N;
//     scanf("%d", &N);

//     char digits[N + 1];  // +1 for the null terminator
//     scanf("%s", digits);

 //     int sum = 0;
 //     for (int i = 0; i < N; i++) {
 //         sum += digits[i] - '0';
 //     }

 //     printf("%d\n", sum);
    
 //     return 0;
 // }
