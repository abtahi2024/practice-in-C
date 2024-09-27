#include<stdio.h>
#include<string.h>
int is_palindrome(char* str)
{
    int i=0;
    int j=strlen(str)-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
          return 0;  
        }
        
        i++;
        j--;
    }
    return 1;

}
int main()
{
    char c[1005];
    scanf("%s",c);
    int ans=is_palindrome(c);
    if(ans==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;

}