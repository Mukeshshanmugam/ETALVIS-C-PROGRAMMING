//write a program to get a number from user and if the last digit of the number is even print the same number .if the last digit of the number is odd then subtract 1 from the last digit and print the number .(note : last digit -MSB)
#include<stdio.h>
int main()
{
int i,a,b,c;
printf("enter a no:");
scanf("%d",&a);
b=a%10;
c=b%2;
if(c==0){
    printf("%d",a);
}
else if(c==1){
    printf("%d",a-1);
}
else{
    printf(" invaid input");
}
return 0;
}
