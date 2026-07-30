//write a program  to get a number from user and print the reverse of that number.
#include<stdio.h>
int main()
{
int i,b=0,c,a;
printf("enter a no:");
scanf("%d",&a);
while(a>0){
    b=a%10;
    printf("%d",b);
    a=a/10;
}
    return 0;
}

