//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
#include<stdio.h>
int main(){
int a,b,c,d,e,f,g;
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
f=b*100+e*10+d;
printf("%d",f);
    return 0;
}