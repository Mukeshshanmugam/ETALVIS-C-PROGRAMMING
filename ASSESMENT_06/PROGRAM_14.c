//write a program to get a number from user and if the last digit of the number is even print the same number .if the last digit of the number is odd then subtract 1 from the last digit and print the number .(note : last digit -MSB)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number: ");
    scanf("%d",&a);
    while(a>0){
    b=a%10;
        if(b%2==0){
            printf("%d",a);
            break;
        }
     else{
        c=a-1;
        printf("%d",c);
        break;
     }
    }
}
