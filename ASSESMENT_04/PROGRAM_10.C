//write a program to get a number from user and print the sum of all digits.
#include<stdio.h>
int main(){
int a,b,c,sum=0;
printf("enter a no:");
scanf("%d",&a);
loop:if(a>0){
    b=a%10;
sum+=b;
a=a/10;
goto loop;
}
printf("%d",sum);

    return 0;
}       