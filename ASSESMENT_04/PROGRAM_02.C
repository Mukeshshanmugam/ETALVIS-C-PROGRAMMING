//write a program to print sum 1 to 5.
#include<stdio.h>
int main(){
int a,b=0,c;
a=1;
loop:if(a<6){
    b+=a;
    a=a+1;
    goto loop;
}
printf("%d",b);
    return 0;
}       