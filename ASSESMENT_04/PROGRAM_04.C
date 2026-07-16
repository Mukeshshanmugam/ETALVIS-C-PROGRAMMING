//write a program to print odd number between 0 to 9
#include<stdio.h>
int main(){
int a=0,b=0,c=0;
loop:if(a<10){
    b=a%2;
    if(b!=0){
    printf("%d\n",a);
    }
a=a+1;
goto loop;
}
    return 0;
}       