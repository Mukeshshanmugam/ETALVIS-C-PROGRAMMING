//write a program to print biggest 4 digit number which is divisible by 7 and 9
#include<stdio.h>
int main(){
    int a=10000,b,c;
    while(0<a){
        if(a%7==0 && a%9==0){
            printf("%d",a);
            break;
        }
        a--;
    }
}
