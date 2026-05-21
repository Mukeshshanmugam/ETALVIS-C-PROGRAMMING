//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print 1; otherwise, print  0.
#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d",&a);
b=a%100;
c=b%10;
d=b/10;
if(d==c){
    printf("1");
}
else{
    printf("0");
}
    return 0;
}