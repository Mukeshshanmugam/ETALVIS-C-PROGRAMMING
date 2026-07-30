//Write a program get number from user print the total number of single digit prime  number in the number 
#include<stdio.h>
int main(){
int i,a,b,c=0;
printf("enter a number : ");
scanf("%d",&a);
    while(a>1){
 b=a%10;
 if(b==2||b==3||b==5||b==7){
  c++;
  printf("%d\n",b);
 }
  a=a/10;
 
    }
    printf("%d",c);
    
    return 0;
}
