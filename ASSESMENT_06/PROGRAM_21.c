//write a program get number from user print the total number digit which are odd in the number
#include<stdio.h>
int main(){
   int a,b,c,d=0;
   printf("Enter a number:");
   scanf("%d",&a);
   while(a>0){
    b=a%10;
    if(b%2==1){
  d++;
    }
    a=a/10;
   } 
   printf("%d total number of odd digits",d);
}
