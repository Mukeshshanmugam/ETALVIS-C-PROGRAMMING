//write a program print total number of single digit prime number.
#include<stdio.h>
int main(){
   int a=2,b ,i,j,c=0,d=0;
while(a<9){
   b=2;
   c=0;
   while(b<a){
      if(a%b==0){
       c=1;
       break;
      }
      b=b+1;
   
    }
    if(c==0){
      printf("%d\n",a);
    }
    a++;
    
}
}



