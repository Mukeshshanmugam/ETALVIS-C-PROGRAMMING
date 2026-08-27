// write a program to get a number from user and if the last digit of the number is even print the same number .if the last digits of the number is odd,then subtract 1 from the last digits and print the number (last digit-MSB)
//function name : check_last_digit_odd.
#include<stdio.h>
int check_last_digit_odd(int a){
  int n=a,b,c;
  b=n%10;
  if(b%2==0){
    printf("%d",n);
  }
  else{
    printf("%d",n-1);
  }
}
int main(){
    int a ;
    printf("Enter a number: ");
    scanf("%d",&a);
     check_last_digit_odd(a);
     return 0;
}