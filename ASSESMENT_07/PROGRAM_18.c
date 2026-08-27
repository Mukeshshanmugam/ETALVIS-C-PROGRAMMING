// write a program to get number from user ,print wheather that number frist two digit (tens digits and ones digit)is prime.
//function name:check_frist_2digits_prime.
#include<stdio.h>
int check_frist_2digits_prime(int a){
 int n=a,b=0,c,i,count=0;
 b=n%100;
for(i=2;i<b;i++){
    if(b%i==0){
      count++;
    }
}
if(count==0){
    printf("%d is prime",n);
}
else{
    printf("%d is not prime",n);
}
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    check_frist_2digits_prime(a);
    return 0;
}