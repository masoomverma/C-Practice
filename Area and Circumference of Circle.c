#include<stdio.h>
int main()
{
    float r,s,cir,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("1. Area\n2. Circumference\nEnter Your Choise:");
    scanf("%f",&s);
    area = 3.14*r*r;
    cir = 2*3.14*r;
    if(s == 1) {
        printf("The area is: %f",area); 
    }
    else if (s == 2) {
        printf("The circumference is: %.2f",cir);
    }
    return 0;
}
