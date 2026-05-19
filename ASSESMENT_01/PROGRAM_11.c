//Get a three-digit number from the user and print the sum of the digits.
#include<stdio.h>
int main(){
int a,b,c,d,e,f;
scanf("%d",&a);
b=a/100;
c=a/10;
d=c%10;
e=a%100;
f=e%10;
printf("%d",b+f+d);
    return 0;
}