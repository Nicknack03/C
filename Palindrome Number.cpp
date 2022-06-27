#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int n,r=0,t=0; 
printf(“\n ENTER THE NUMBER”); 
scanf("%d",&n); 
t=n; 
while(n!=0) 
{ 
r=(r*10)+(n%10); 
n=n/10; 
} 
if(t==r) 
printf(“ \n THE NUMBER IS PALINDROME”); 
else 
printf(“ \n THE NUMBER IS NOT PALINDROME”); 
getch(); 
}
