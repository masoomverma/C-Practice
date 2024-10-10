#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("The number %d is Even.",num);
    }
    else
    {
        printf("The number %d is Odd.",num);
    }
    return 0;
}
