//write a program  to get a number from user print the total number of digits in that number.
#include<stdio.h>
int main()
{
int a,i,sum=0;
printf("enter a no:");
scanf("%d",&a);
for(i=0;i<=a;i++){
     a/10;
    sum++;
   a=a/10;
}
printf("%d",sum);
    return 0;
}

