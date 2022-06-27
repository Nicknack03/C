#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int i,j,k,s=4; 
for(i=7;i>=1;i=i-2) 
{ 
for(k=1;k<=s;k++) 
printf(" "); 
for(j=i;j>=1;j--) 
{ 
printf("*"); 
} 
printf("\n"); 
s++; 
} 
getch(); 
} 
