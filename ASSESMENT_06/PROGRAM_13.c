// write a program to get a number from user and interchange the first and last digits and print the result
#include<stdio.h>
int main(){
    int a,b,c=0,last=0,count=0,first=0,d=1,f=10,middle=0,e=0,reverse=0;
    printf("enter a number: ");
    scanf("%d",&a);

    last=a%10;
    b=a;
       while(b>0){
        b%10;
         c++;
             b=b/10;
       }
count=c-1;
while(count>0){
  d*=f;
  count--;
}
    first=a/d;
    e=a%d;
    middle=e/10;
    
 reverse=(last*d)+(middle*10)+first;

 printf("%d\n",reverse);
}

