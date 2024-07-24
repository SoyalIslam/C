#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
int a[10];
int i,m,k,pos,x,p;
printf("Enter the size of element");
scanf("%d",&m);
if(m>10){
 printf("Array is not fulfill the size ");
 exit(0);
 }
 printf("Enetr the no of element:");
 for(i=0;i<m;i++)
 scanf("%d",&a[i]);
 printf("enter the element of insert");
 scanf("%d",&pos);
 for(k=m;k>pos;k--)
 a[k]=a[k-1];
 a[pos]=x;
 x++;
 for(p=0;p<m;p++)
 printf("%d",a[i]);
 return 0;
 }
