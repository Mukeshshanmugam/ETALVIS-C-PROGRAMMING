//write a program to print the two digit even number who's sum of digits are 6.
#include<stdio.h>
int main()
{
int i,a,b,c;
for(i=10;i<=99;i++){
    if((i%2)==0){
      // printf("%d\n",i);
a=i%10;
b=i/10;
c=a+b;
if(c==6){
    printf("%d\n",i);
}
    }
}
    return 0;
}