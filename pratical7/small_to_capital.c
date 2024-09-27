#include<stdio.h>
char small_to_capital(char x)
{
    char a;
    a=x-32;
    return a;
}
int main()
{
    char d;
    scanf("%c",&d);
    char a=small_to_capital(d);
    printf("%c\n",a);
    return 0;
}