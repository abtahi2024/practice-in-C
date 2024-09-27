// #include<stdio.h>
// void odd_even()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     // printf("%d",n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     int even=0;
//     int odd=0;
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]%2==0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("%d ",even);
//     printf("%d ",odd);
    
// }
// int main()
// {
    
//     odd_even();

//     return 0;


// }



#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
    if(ar[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    }
    printf("%d %d",even,odd);
    // return n;

}
int main()
{
    odd_even();

    return 0;
}