
//WRITE a loop program to print the sum of two digit number whose one digits is 5
#include<stdio.h>
int main(){
    int a=10,b,c,sum=0;
    while(a<100){
b=a%10;
if(b==5){
  sum+=a;
}
a++;

    }
    printf("%d",sum);
}
