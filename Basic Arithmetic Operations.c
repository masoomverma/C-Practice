#include <stdio.h>
int main()
{
    clrscr(); 
    int s,a,b,add,sub,mul,div;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("1. Addition\n","2. Subctration\n","3. Multiplication\n","4. Division\n","Enter your choise: \n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
          add = a + b
          printf("The Addition is %d.",add);
        case 2:
          sub = a + b
          printf("The Subctraction is %d.",sub);    
        case 3:
          mul = a * b
          printf("The Multiplication is %d.",mul);
        case 4:
            div = a / b
          printf("The Division is %d.",div);
    }
    getch();
    return 0;
}
