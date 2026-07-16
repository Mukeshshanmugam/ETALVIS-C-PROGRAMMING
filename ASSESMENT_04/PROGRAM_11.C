//write a program  to get a number from user and print the reverse of that number.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter a no:");
scanf("%d",&a);
loop :if(a>0){
    b=a%10;
    printf("%d",b);
    a=a/10;
    goto loop;
}
    return 0;
}       