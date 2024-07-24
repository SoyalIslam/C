#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter the length:\n");
    scanf("%d",&l);
    printf("Enter the breadth:\n");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area of rectangle:\n%d",area);
    printf("\n");
    printf("Perimeter of rectangl:%d",perimeter);
    return 0;

}
