//write a loop program to print the sum of two digit odd number whose ten s digit is 7.
#include<stdio.h>
int main(){
    int i=9,a,b,c=0,sum=0;
  while(i<100){
    if(i%2==1){
         b=i/10;
        if(b==7){
            sum+=i;
    }
    } 
  i++;
  
}
printf("%d",sum);
    }
