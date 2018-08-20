#include<stdio.h>
#include<conio.h>
int lcm(int,int);
int main(){
    int a,b,l;
    printf("Enter any two positive integers ");
    scanf("%d%d",&a,&b);
    if(a>b)
         l = lcm(a,b);
    else
         l = lcm(b,a);
    printf("LCM of two integers is %d",l);
    return 0;
}
int lcm(int a,int b){
    int temp = a;
    while(1){
         if(temp % b == 0 && temp % a == 0)
             break;
         temp++;
    }
   return temp;
}
