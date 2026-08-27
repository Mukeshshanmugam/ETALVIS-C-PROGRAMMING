//write a program get number from number from user print wheather that number is prime or not.
//function name:check_prime.
#include<stdio.h>
int check_prime(int a){
 int n=a,b,c,i,count=0;
for(i=2;i<n;i++){
    if(n%i==0){
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
    check_prime(a);
    return 0;
}