//Get a three-digit number from the user, make the one's digit 2, and then print it.
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
b=a/10;
c=b*10+2;
printf("%d",c);
    return 0;
}