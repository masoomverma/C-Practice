#include <stdio.h>
int main()
{
    clrscr(); 
    int s,a,b,add,sub,mul;
    float div;
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
          printf("The Addition is %d.\n",add);
        case 2:
          sub = a + b
          printf("The Subctraction is %d.\n",sub);    
        case 3:
          mul = a * b
          printf("The Multiplication is %d.\n",mul);
        case 4:
            if(b != 0)
            {
                div = a / b
                printf("The Division is %d.\n",div);
            }
            else
            {
                printf("Error, Division by zero is not DEFINE.\n");
    
            }
            break;
        default :
            printf("Invalid Choise.\n");
                
            getch();
    return 0;
}
