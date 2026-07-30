// write a program to get a number from user and interchange the first and last digits and print the result
#include<stdio.h>
#include<math.h>
int main()
{
int a,b=0,c,next=0,digits=0,mult=0,last=0,frist=0,midd=0,rev=0;
printf("enter a no:");
scanf("%d",&a);
next=a;
while(next>0){
    digits++;
    next/10;
    next=next/10;
}

mult=pow(10,digits-1);
last=a%10;
frist=a/mult;
midd=(a%mult)/10;
rev=last*mult+midd*10+frist;
printf("%d",rev);
    return 0;
}

