//write a program get number from user print wheather that number is prime and sum of digit is equal to 14.
//function name: check_prime_and_sum14.
#include<stdio.h>
int check_prime_and_sum14(int a){
 int n=a,b=0,c,count=0,j,sum=0,i;
 for(i=2;i<n;i++){
    if(n%i==0){
        count++;
    }
 }
for(j=1;0<n;j++){
   b=n%10;
   sum+=b;
   n=n/10;
}
if(count==0 && sum==14){
    printf("%d is prime and sum of digits is 14",a);
}
else {
    printf("not prime and not sum of digit is 14");
}
}
int main(){
int a;
printf("Enter a number :");
scanf("%d",&a);
check_prime_and_sum14(a);
return 0;
}
