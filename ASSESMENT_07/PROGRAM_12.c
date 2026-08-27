//write a program to get a number from user and print the sum of all digits.
// function name:disp_sum_all_digits
#include<stdio.h>
int disp_sum_all_digits(int a){
 int i,b,sum=0;
  for (i=1;a>0;i++){
    b=a%10;
    sum+=b;
    a=a/10;
  }
  printf("%d",sum);
}
int main (){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    disp_sum_all_digits(a);
    return 0;
}