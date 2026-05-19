//Get a three-digit number from the user and make the ten's digit as 0, then print it.
#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d",&a);
b=a/100;
c=a%100;
d=c%10;
e=b*100+d;
printf("%d",e);

    return 0;
}