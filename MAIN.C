
#include<stdio.h>
#include<conio.h>

void read(int[10][10],char,int,int);
void write(int[10][10],int,int);
void main()
{
int a[10][10];
int b[10][10];
int s[10][10];
int t[10][10];
int r,c,i,j;
printf("Enter no of row and columns of a matrix\n");
scanf("%d%d",&r,&c);
read(a,'a',r,c);
read(b,'b',r,c);
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
s[i][j]=a[i][j]+b[i][j]; }
}
printf("Matrix A is:\n\n");
write(a,r,c);
printf("Matrix B is:\n\n");
write(b,r,c);
printf("Sum of matrix A and B is:\n\n");
write(s,r,c);
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
t[i][j]=s[j][i];
 }
}
printf("Transpose of tesultant matrix is:\n");
write(t,r,c);
getch();
}
void read(int x[10][10],char ch,int r,int c)
{
 int i,j;
 printf("Enter elements of a matrix[%c]\n",ch);
 for(i=0;i<r;i++)
 {
for(j=0;j<c;j++)
{
scanf("%d",&x[i][j]); }
 }
}
void write(int y[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 printf("%d\t",y[i][j]);
 }
 printf("\n");
 }
}