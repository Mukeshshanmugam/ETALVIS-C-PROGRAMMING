//Write a program to get a 4-digit number from user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.
//Function Name: middle_2digits_prime
#include<stdio.h>
int middle_2digits_prime(int a){
 int n=a,b,c,i,count=0;
 b=n%1000;
 c=b/10;
for(i=2;i<c;i++){
    if(c%i==0){
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
    middle_2digits_prime(a);
    return 0;
}