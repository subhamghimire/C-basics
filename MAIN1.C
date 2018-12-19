

#include <stdio.h>

#include<conio.h>
void insert(int [100], int*);
void delet(int [100], int*);
void traverse(int [100], int*);
void searching(int [100], int*);
void main()
{
int a[100],nel,pos,i;
int n;
int choice;
printf("Enter no of elements to be inserted");
scanf("%d", &n);
printf("Enter %d elements", n);
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
do
{
 printf("\nmanu for program:\n");
 printf("1:insert\n2:delete\n3:Traverse\n4:searching\n5:exit\n");
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
case 1:
 insert(a,&n);
 break;
case 2:
 delet(a,&n);
 break;
 case 3:
 traverse(a,&n);
 break;
 case 4:
 searching(a,&n);
 break;
 case 5:
 exit(1);
 break;
 default:
 printf("Invalied choice");
 }
}while(choice<6);
 }
void insert(int a[100], int *n)
{
int pos, nel, i;
printf("Enter position at which you want to insert new element");
scanf("%d", &pos);
printf("Enter new element");
scanf("%d", &nel);
for(i=*n-1; i>=pos; i--)
{
    a[i+1] = a[i];
}
a[pos]=nel;
*n=*n+1;
printf("New array is:\n");
for(i=0; i<*n; i++)
{
printf("%d\t", a[i]);
}
 }
 void delet(int a[100], int *n)
 {
int pos, i;
printf("Enter position at which you want to delete an element");
scanf("%d", &pos);
for(i=pos; i<*n; i++)
{
a[i] = a[i+1];
}
*n=*n-1;
printf("New array is:\n");
for(i=0; i<*n; i++)
{
printf("%d\t", a[i]);
}
 }
void traverse(int a[100], int *n)
{
int i;
printf("Elements of array are:\n");
for(i=0;i<*n;i++)
{
printf("%d\t",a[i]);
}
 }
void searching(int a[100], int *n)
{
int k,i;
printf("Enter searched item");
scanf("%d",&k);
for(i=0;i<*n;i++)
{
if(k==a[i])
{
printf("******successful search******");}
}
if(i==*n)
printf("*********unsuccessful search*********");
getch();
}

