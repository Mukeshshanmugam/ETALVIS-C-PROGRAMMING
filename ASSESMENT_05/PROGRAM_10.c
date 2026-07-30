////write a program to get a number from user and print the sum of all digits.
#include<stdio.h>
int main()
{
int i,a,sum=0,b,c;
printf("enter a no:");
scanf("%d",&a);
while(a>0){
b=a%10;
sum+=b;
a=a/10;
}
printf("%d",sum);

    return 0;
}
