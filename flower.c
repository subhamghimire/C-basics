#include<stdio.h>
#include<conio.h>
int main()
{

 int num,n,r,c,sp,q,t;
 printf("Enter any number : ");
 scanf("%d", &num);
 n=num;
 for(r=1; r<=num; r++,n--)
 {
  for(c=1; c<=2; c++)
  {
   if(r==3)
   {
     printf("1 ");
     break;
   }
   else
     printf("%d",c);
  }
  for(sp=r; sp>1; sp--)
     printf(" ");
  for(t=n; t>=1; t--)
     printf("%d",t);
  printf("\n");
 }
 for(r=1; r<=num-1; r++)
 {
  for(c=1; c<=2; c++)
     printf("%d",c);
  for(sp=r; sp<=1; sp++)
     printf(" ");
  for(t=r+1; t>=1; t--)
     printf("%d",t);
  printf("\n");
 }
 return 0;
}
Be The Next To Share
