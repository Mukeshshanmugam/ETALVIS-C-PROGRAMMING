//write a program  to get a 4 digits number from user print whether that number middle two digits (hundred digit and tens digits )is prime
#include<stdio.h>
int main(){
int i,a,b=0,c=0,d=0,e=0,f;
printf("Enter a no:");
scanf("%d",&a);
b=a%1000;
c=b/10;
if(c>1){
    for(i=2;i<c;i++){
        d=c%i;
        if(d==0){
    e++;
        }
    }
    if(e==0){
        printf("%d is prime",a);
    }
    else{
        printf("%d is not a prime ",a);
    }
}
else{
    printf("no is not a prime");
}

    return 0;
}
