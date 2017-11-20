#include <stdio.h>
#include <stdlib.h>


int main(){

int choose;
float a,b,c;
char answer;
    
do{
    
  printf("Enter your choose 1:addition,2:substraction,3:multiplication,4:division\n");
  scanf(" %d",&choose);

  printf("Enter the values\n");
  scanf(" %f\n%f",&a,&b);
    
if(choose==1){
  printf("The addition is: %.2f\n",c=a+b);
  }else if(choose==2){
  printf("The substraction is: %.2f\n",c=a-b);
  }else if(choose==3){
  printf("The multiplication is: %.2f\n",c=a*b);
  }else if(choose==4){
  printf("The division is: %.2f\n",c=a/b);
}else{
  printf("no value");
  }
    
  printf("\nDo you wish to continue(y/n)\n",answer);
  scanf(" %c", &answer);
    
  } while( answer!='n');


return 0;

  }
