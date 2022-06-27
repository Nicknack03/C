#include<conio.h>
#include<stdio.h>
int point(int *x, int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
int main()
{
int a,b;
printf("\n ENTER NUMBERS");
scanf("%d %d",&a,&b);
point(&a,&b);
printf("\n NOW YOUR VALUES ARE %d %d",a,b);
getch();
}