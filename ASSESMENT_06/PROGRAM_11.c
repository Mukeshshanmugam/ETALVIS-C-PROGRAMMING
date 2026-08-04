////write a program to get a number from user and print the sum of all digits.
#include<stdio.h>
int main(){
    int a,sum=0,b;
    printf("Enter a number ");

    scanf("%d",&a);
    while(a>0){
        b=a%10;
        sum+=b;
        a=a/10;
}
printf("total number of sum is %d",sum);
}
