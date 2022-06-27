#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int n,r=0,t=0,s=0; 
printf(“\n ENTER THE NUMBER”); 
scanf(“%d”,&n); 
t=n; 
while(n!=0) 
{ 
r=n%10; 
s=s+r*r*r; 
n=n/10; 
} 
if(t==s) 
printf(“\n THE NUMBER IS ARMSTRONG”); 
else 
printf(“\n THE NUMBER IS NOT ARMSTRONG”); 
getch(); 
}
