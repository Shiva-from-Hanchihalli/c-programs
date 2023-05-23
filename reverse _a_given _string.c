#include <stdio.h>

void reverse(char *p)
{
    if(*p)
    {
        reverse(p+1);
        putchar (*p);
    }
}
int main()
{
    
    char str[100];
    
    printf("enter the string:");
    scanf("%s",str);
    
    printf("Reversed String : ");
    reverse(str);
    return 0;
}
