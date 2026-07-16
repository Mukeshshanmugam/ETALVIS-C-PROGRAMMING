//write a program to print 1to5 on one by one 
#include<stdio.h>
int main(){
int a,b,c;
a=1;
loop: if(a<6){
    printf("%d\n",a);
    a=a+1;
    goto loop;
}
    return 0;
}       