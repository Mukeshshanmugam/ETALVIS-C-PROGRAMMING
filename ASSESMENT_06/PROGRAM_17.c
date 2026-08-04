//write aprogram to get a number from user print whether that number is prime and sum of digit is equal to 14,two digit
#include<stdio.h>
int main(){
    int a,b=2,c,d=0,e=0,f=0;
    printf("Enter a number:");
    scanf("%d",&a);
    f=a;
    while(a>1){
        
        if(a%b==0){
        c++;
        }
        b++;
        break;
    }
   
   while(a>1){
    e=a%10;
    d+=e;
    a=a/10;
   }    
   
 
 if(d==14 && c==0){
    printf("%d is prime",f);
 }
 else {
    printf("not a prime");
 }

    
}
