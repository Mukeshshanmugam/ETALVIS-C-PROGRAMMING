// write a loop program to print the sum of two digit number whose one's digit is 5.
// function name:disp_2digit_ones5
#include<stdio.h>
void disp_2digit_ones5(){
 int i,a,b,c,sum=0;
 for(i=10;i<100;i++){
    c=i%10;
    if(c==5){
    sum+=i;
   }
}
 printf("%d\n",sum);
}
int main (){
    disp_2digit_ones5();
    return 0 ;
}