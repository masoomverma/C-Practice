#include <stdio.h>
#include <conio.h>
int main()
{
    clrscr(); 
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
    getch();
    return 0;
}
