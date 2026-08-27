// write a loop program to print the two digit odd number ,who's sum of digits are 7.
//function name : disp_2digit_odd_sum7
#include<stdio.h>
void disp_2digit_odd_sum7(){
    int i,a,b,c,sum=0;
for( i=10;i<100;i++){
   if(i%2==1){
    a=i%10;
    b=i/10;
   sum=a+b;
   
   
if(sum==7){
    printf("%d\n",i);
}
}
}
}
int main(){
    disp_2digit_odd_sum7 ();
    return 0;
}