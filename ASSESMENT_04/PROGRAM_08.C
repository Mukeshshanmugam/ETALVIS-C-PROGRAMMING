//write a loop program to print the sum of two digit odd number whose ten s digit is 7.
#include<stdio.h>
int main(){
int a=10,b=0,c=0,sum=0;
loop: if(a<100){
b=a%2;
if(b!=0){
    c=a/10;
    if(c==7){
        printf("%d\n",a);
        sum+=a;
    }
}
    a=a+1;
    goto loop;
}
printf("%d",sum);
    return 0;
}       