// write a number to get number from user print whether that number frist two digits (tens digits and ones digits ), is prime
#include<stdio.h>
int main(){
int i,a,b,c,d,e,f,g=0;
printf("enter a no:");
scanf("%d",&a);
b=a%10;
c=a/10;
e=c%10;
d=(e*10)+b;
if(d>1){
    for(i=2;i<d;i++){
   f=d%i;
   if(f==0){
     g++;
   }
    }
    if(g==0){
        printf("%d is prime",a);
    }
    else{
         printf("%d is not prime",a);
    }
}
else {
    printf("no is not a prime");
}
    return 0;
}
