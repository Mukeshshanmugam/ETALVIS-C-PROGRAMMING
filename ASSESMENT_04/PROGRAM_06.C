//write a loop program to print the two digit odd numbers ,who s sum of digits are 7.
#include<stdio.h>
int main(){
int a=10,b=0,c=0,d=0,e=0,f=0;
loop: if(a<100){
e=a%2;
if(e!=0){
    b=a%10;
    c=a/10;
    d=b+c;
    if(d==7){
        printf("%d\n",a);
    }
}
    a=a+1;
    goto loop;
}
    return 0;
}       