//write a program to print the total count of number which are less than 1,00,000 and whose sum of digits is 14 
#include<stdio.h>
int main(){
 int a=100000,b=0,c,d=0,count=0;
 while(a>0){
    b=a;
    d=0;
    while(b>0){
        c=b%10;
        d+=c;
        b=b/10;
    }
    if(d==14){
        count++;
    }
    a=a-1;
 }
 printf("%d",count);
}
