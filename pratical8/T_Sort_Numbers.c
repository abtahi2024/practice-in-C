// 1. min,  max ber korbo a ,b ,c er moddhe theke
// 2. erpor baki thaklo ar ekta value
// a+b+c - max-min korle baki value ta pabo, seta ke bollam mid value
// 3. ebar print korben
// min, mid, max
// 4. print korben a,b,c
#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int min,max,mid;
  if(a<=b && a<=c)
  {
    min=a;
  }
  else if(b<=a && b<=c)
  {
    min=b;
  }
  else
  {
    min=c;
  }
  if(a>b && a>c)
  {
    max=a;
  }
  else if (b>=a && b>=c)
  {
    max=b;
  }
  else
  {
    max=c;
  }
  
  mid=a+b+c-min-max;
  printf("%d\n%d\n%d\n\n",min,mid,max);

  printf("%d\n%d\n%d\n",a,b,c);

 return 0;

}

// #include <stdio.h>

// int main() {
//     int A, B, C;
//     scanf("%d %d %d", &A, &B, &C);

//     int minVal, maxVal, midVal;
    
//     // Find minimum, maximum, and middle values
//     minVal = (A < B) ? ((A < C) ? A : C) : ((B < C) ? B : C);
//     maxVal = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
//     midVal = A + B + C - minVal - maxVal;

//     // Output in ascending order
//     printf("%d\n%d\n%d\n\n", minVal, midVal, maxVal);

//     // Output in the order they were read
//     printf("%d\n%d\n%d\n", A, B, C);

//     return 0;
// }





// #include<stdio.h>
// int main()
// {
//   int a,b,c;
//   scanf("%d %d %d",&a,&b,&c);
//   int n;
//   int ara[3];
//   ara[0]=a;
//   ara[1]=b;
//   ara[2]=c;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i+1;j<n;j++)
//     {
//       if(ara[i]>ara[j])
//       {

//       int tmp=ara[i];
//       ara[i]=ara[j];
//       ara[j]=tmp;
//       }

//     }
//   }
//   for(int i=0;i<n;i++)
//   {
//     printf("%d\n",ara[i]);
//   }
//   printf("\n");
//   printf("%d\n%d\n%d\n",a,b,c);

//   return 0;


// }