//write a program  to get a number from user print the total number of digits in that number.
#include<stdio.h>
int main(){
int a,b,c,sum=0;
printf("enter a number :");
scanf("%d",&a);
loop:if(a>0){
  a/10;
  sum++;
  a=a/10;
  goto loop;
}
printf("%d",sum);
    
}       