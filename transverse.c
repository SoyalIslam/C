#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int main()
{
    int i,m,a[10];
    printf("enter the size of array:");
    scanf("%d",&m);
    if (m>10)
    {
      printf("the size of array is not fulfill");
      exit(0);
    }
    printf("Enter the element:\n");
    for ( i = 0; i < m; i++)
    scanf("%d",&a[i]);
    printf("array series:");
    for(i=0; i > m; i++)
    printf("%d",a[i]);
    return 0;
}