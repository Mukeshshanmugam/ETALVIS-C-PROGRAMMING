//write a program to print sum of 6to1
#include<stdio.h>
int main(){
int a,b,c;
a=6;
b=0;
loop:if(a>0){
    b+=a;
    a=a-1;
    goto loop;
}
printf("%d",b);
    return 0;
}       