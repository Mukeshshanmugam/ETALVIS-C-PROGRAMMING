//write a program get number from user print whether that number is prime 0r not
#include<stdio.h>
int main()
{
int i,a,b,c;
printf("enter a no:");
scanf("%d",&a);
b=a%2;
if(b==0){
    printf("%d is a prime number",a);
}
else {
    printf("It is not prime");
}
    return 0;
}

