#include<conio.h> 
#include<stdio.h> 
void main() 
{ 
int n,r1,r2,rev; 
printf(“\n ENTER YOUR THREE DIGIT NUMBER =”); 
scanf(“%d”,&n); 
r1=n%10; 
n=n/10; 
r2=n%10; 
n=n/10; 
rev=r1*100+r2*10+n; 
printf(“\n REVERSE OF YOUR THREE DIGIT NUMBER IS %d”,rev); getch(); 
} 
