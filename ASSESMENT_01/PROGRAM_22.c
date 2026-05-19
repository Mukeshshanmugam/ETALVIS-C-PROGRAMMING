//Get a three-digit number from user.If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should always be a single digit only.
#include<stdio.h>
int main(){
int a,b,c,d,e,f=0;
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
f=b+d+e;
if(f<10){
printf("%d",f);
}
else if(f>10){
    int p,q;
    p=f/10;
    q=f%10;
    printf("%d",p+q);
}
    return 0;
}