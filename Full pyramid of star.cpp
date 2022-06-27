#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int i,j,k,s=4; 
for(i=1;i<=7;i=i+2) 
{ 
for(k=1;k<=s;k++) 
printf(" "); 
for(j=1;j<=i;j++) 
{ 
printf("*"); 
} 
printf("\n"); 
s--; 
} 
getch(); 
} 