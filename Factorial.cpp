#include<conio.h> 
#include<stdio.h> 
void main() 
{ 
int a,i,b=1; 
printf("\n ENTER NUMBER "); 
scanf("%d",&a); 
for(i=a;i>=1;i--) 
{ 
b=b*i; 
} 
printf("%d",b); 
getch(); 
} 
