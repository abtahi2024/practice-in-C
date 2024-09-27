#include<stdio.h>
void fun(int a[],int n,int *min,int *max)
{
//    int min;
//    int max;
   *min=a[0],*max=a[0];
   for(int i=0;i<n;i++)
   {
    if(a[i]<*min)
    {
        *min=a[i];
    }
    else if(a[i]>*max)
    {
        *max=a[i];
    }
   }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min,max;
    fun(a,n,&min,&max);
    printf("%d %d",min,max);

    return 0;
}


// #include <stdio.h>

// void fun(int a[], int n, int *min, int *max) {
//     *min = a[0];
//     *max = a[0];
    
//     for (int i = 0; i < n; i++) {
//         if (a[i] < *min) {
//             *min = a[i];
//         }
//         else if (a[i] > *max) {
//             *max = a[i];
//         }
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];
    
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
    
//     int min, max;
//     fun(a, n, &min, &max);
//     printf("%d %d", min, max);
    
//     return 0;
// }
