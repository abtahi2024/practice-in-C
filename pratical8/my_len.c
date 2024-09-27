#include<stdio.h>
int my_len(char a[])
{
    int l=0;
    for(int i=0;a[i]!='\0';i++)
    {
        l++;
    }
    return l; 
}
int main()
{
    char a[10];
    scanf("%s",&a);
    int x=my_len(a);
    printf("%d",x);

}