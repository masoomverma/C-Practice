#include <stdio.h>
#include <conio.h>
int main()
{
    clrscr(); 
    int s,a,b,add,sub,mul,div;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("What do you want to do.\n","1. Addition\n","2. Subctration\n","3. Multiplication\n","4. Division\n");
    select = scanf("%d",&s);
    if(select == 1)
    {
          add = a + b
          printf("The Addition is %d.",add);
    }
    if(select == 2)
    {
          sub = a + b
          printf("The Subctraction is %d.",sub);
    }
    
    if(select == 3)
    {
          mul = a * b
          printf("The Multiplication is %d.",mul);
    }
    
    if(select == 4)
    {
          div = a / b
          printf("The Division is %d.",div);
    }
    getch();
    return 0;
}
