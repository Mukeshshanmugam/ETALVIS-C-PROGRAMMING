//write a program to print biggest 4 digit number which is divisible by 7 and 9
#include<stdio.h>
int main(){
int i,a=0,b=0;
for(i=9999; i>=1000 ;i--){
    a=i%7;
    b=i%9;
    if(a==0 && b==0){
        printf("%d",i);
        break ;
    }
}
    return 0;
}
