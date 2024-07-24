#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    float perimeter,area;
    printf("Enter the radius:");
    scanf("%d",r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("area of circle:%f\n",area);
    printf("perimeter of circle:%f",perimeter);
    return 0;
}