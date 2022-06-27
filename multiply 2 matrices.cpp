#include<conio.h> 
#include<stdio.h> 
void main() 
{ 
int i,j,a[3][3],b[3][3],c[3][3],s=0,k; 
printf("\n ENTER THE NUMBERS IN 1 ARRAY"); 
for(i=0;i<3;i++) 
{ 
for(j=0;j<3;j++) 
{ 
scanf("%d",&a[i][j]); 
} 
} 
printf("\n ENTER THE NUMBERS IN 2 ARRAY"); 
for(i=0;i<3;i++) 
{ 
for(j=0;j<3;j++) 
{ 
scanf("%d",&b[i][j]); 
} 
} 
for(i=0;i<3;i++) 
{
for(j=0;j<3;j++) { 
s=0; 
for(k=0;k<3;k++) { 
s=s+(a[i][k]*b[k][j]); } 
c[i][j]=s; 
} 
} 
for(i=0;i<3;i++) { 
for(j=0;j<3;j++) { 
printf("%d",c[i][j]); printf(" "); 
} 
printf("\n"); 
} 
getch(); 
}
