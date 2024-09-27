#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] < ara[min])
        {
            min = i;
        }
        if (ara[i] > ara[max])
        {
            max = i;
        }
    }
    
        int tmp = ara[min];
        ara[min] = ara[max];
        ara[max] = tmp;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    return 0;
}