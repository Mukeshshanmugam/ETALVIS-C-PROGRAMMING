//Get a two-digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use "if".
#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d",&a);
b=a%10;
c=a/10;
d=b+c;
e=a-(5*(d%2));
printf("%d",e);
    return 0;
}