#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(row!=col)
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                flag=0;
            }
            else if(i+j==row-1 && a[i][j]!=1)
            {
                flag=0;
            }
            else if(i!=j && i+j!=row-1 && a[i][j]!=0)
            {
                flag =0;
            }
        }
    }
    if(flag==1)
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

// int main() {
//     int row, col;
//     scanf("%d %d", &row, &col);
//     int a[row][col];

//     // Read the matrix
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int flag = 1; // Initialize the flag to 1

//     // Check if it's a square matrix
//     if (row != col) {
//         flag = 0;
//     }

//     // Check the matrix elements
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (i == j && a[i][j] != 1) { // Check the primary diagonal
//                 flag = 0;
//             } else if (i + j == row - 1 && a[i][j] != 1) { // Check the secondary diagonal
//                 flag = 0;
//             } else if (i != j && i + j != row - 1 && a[i][j] != 0) { // Check all other elements
//                 flag = 0;
//             }
//         }
//     }

//     if (flag == 1) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
