#include<stdio.h>
#include <math.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    float op=p/(1.0-x/100.0);
    printf("%.2f",ceil(op*100)/100);
    return 0;
}



// #include <stdio.h>
// #include <math.h>

// int main() {
//     int x, p;
    
//     // Read input values
//     scanf("%d %d", &x, &p);

//     // Calculate the original price using floating-point division
//     float original_price = p / (1.0 - x / 100.0);

//     // Print the result rounded to two decimal places
//     printf("%.2f\n", ceil(original_price * 100) / 100); // Use ceil to round up to two decimal places

//     return 0;
// }
