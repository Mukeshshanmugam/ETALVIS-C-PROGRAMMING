//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
#include<stdio.h>
int main(){
int a,b,c,d,e,f,g,h;
scanf("%d",&a);
b=a/100;
g=b/10;
h=b%10;
c=a%100;
d=c/10;
e=c%10;
f=h*1000+g*100+d*10+e;
printf("%d",f);
return 0;
}