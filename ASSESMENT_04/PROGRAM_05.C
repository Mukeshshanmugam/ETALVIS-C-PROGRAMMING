//write a loop program to print the two digit odd number ,below 20
#include<stdio.h>
int main(){
int a=10,b=0,c=0;
loop:if(a<20){
    b=a%2;
    if(b!=0){
    printf("%d\n",a);
    }
a=a+1;
goto loop;
}
 return 0;
}       