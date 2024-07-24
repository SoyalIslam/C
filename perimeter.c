#include"stdio.h"
#include"conio.h"
int main()
{
    int l,b,area,perimeter;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breath:");
    scanf("%d",&b);
    perimeter=(l+b)*2;
    area=l*b;
    printf("Perimeter of rectrangle:%d\n",perimeter);
    printf("Area of rectangle:%d",area);
    return 0;
}