//Get a two-digit number from the user, make the one's digit 0, then print it.
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
b=a%10;
c=a-b;
printf("%d",c);
return 0;
}
