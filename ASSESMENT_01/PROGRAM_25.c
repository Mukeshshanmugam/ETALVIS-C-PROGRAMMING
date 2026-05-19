//Get a two-digit number from the user and print the sum of the digits.
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
b=a/10;
c=a%10;
printf("%d",b+c);
    return 0;
}