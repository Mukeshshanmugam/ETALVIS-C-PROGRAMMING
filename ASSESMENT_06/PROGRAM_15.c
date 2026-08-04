//write a program get number from user print whether that number is prime 0r not
#include<stdio.h>
int main(){
    int a,b=2,c=0,d=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a>1){
        d=a%b;
        if(d==0){
       c++;
       }
        b=b+1;
        break;
    }
    if(c==0){
        printf("%d is prime",a);
    }
    else{
        printf("not");
    }
}
