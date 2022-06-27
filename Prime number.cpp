#include<conio.h> 
#include<stdio.h> 
void main() 
{ 
int i,j,p,sum=0; 
for(i=2;i<=100;i++) 
{p=1; 
for(j=2;j<=i/2;j++) 
{ 
if(i%j==0) 
p=0; 
} 
if(p==1) 
sum=sum+i; 
} 
printf(“\n SUM IS %d”,sum); 
getch(); 
} 
