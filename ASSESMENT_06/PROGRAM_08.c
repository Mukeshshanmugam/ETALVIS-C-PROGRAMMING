//write a loop program to print the sum two digit odd numbers ,who s sum of digits are 7.
#include<stdio.h>
int main(){
    int i=9,a,b,c=0,sum=0;
  while(i<100){
    if(i%2==1){
        a=i%10;
        b=i/10;
        c=a+b;
        if(c==7){
            printf("%d\n",i);
    
    }
    } 
  i++;
  
}

}
