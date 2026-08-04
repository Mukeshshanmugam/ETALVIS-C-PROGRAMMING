//write a program to print the two digit even number who's sum of digits are 6.
#include<stdio.h>
int main(){
  int i=9,a,b,c=0;
  while(i<100){
    if(i%2==0){
        a=i%10;
        b=i/10;
        c=a+b;
        if(c==6){
    printf("%d\n",i);
    }
    
    
  } 
  i++;
  
}
}
