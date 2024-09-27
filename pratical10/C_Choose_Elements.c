#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // if(a[i]>a[i])
    
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                {
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }

        }
        long long int max=0;
         
        //  for(int i=0;i<n;i++)
        //  {
        //     printf("%d ",a[i]);
        //  }
         
         for(int i=0;i<k;i++)
         {
            if(a[i]>0)
            {
            max+=a[i];
            }

         }
        printf("%lld",max);

    
    return 0;
}


