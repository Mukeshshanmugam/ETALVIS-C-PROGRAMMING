//Get a three-digit number from the user and subtract five from that number if one's digit number and 100's digit number are odd, then print the result. Do not use "if".
#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d",&a);
b=a/100;
c=a%100;
d=c%10;
e=a-(5*(b%2)*(d%2));
printf("%d",e);
    return 0;
}