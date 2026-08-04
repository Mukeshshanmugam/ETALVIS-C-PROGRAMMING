//write a program  to get a 4 digits number from user print whether that number middle two digits (hundred digit and tens digits )is prime
#include<stdio.h>
int main(){
    int a,b,c,d=2,sum=0;
    printf("enter a no:");
    scanf("%d",&a);
    b=a%1000;
    c=b/10;
    while(c>d){
     if(c%d==0){
      sum++;
      break;
     }
     d=d+1;
    }
    if(sum==0){
        printf("%d is prime",a);
    }
    else if(sum!=0){
        printf("not prime");
    }

}
