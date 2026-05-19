//Get a two-digit number from the user, make the ten's digit 1, and then print it.
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
b=a%10;
c=10+b;
printf("%d",c);
    return 0;
}