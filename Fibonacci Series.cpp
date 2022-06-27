#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int a=0,b=1,c=0; 
for(int i=1;i<=20;i++) 
{ 
printf(“\n %d”,c); 
a=b; 
b=c; 
c=a+b; 
} 
getch(); 
}
