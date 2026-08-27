// write a loop program to print the sum of two digits odd number ,whose ten's digit is 7.
//function name:disp_2digit_odd_sum_tens7
#include<stdio.h>
void disp_2digit_odd_sum_tens7(){
int i,a,b,c,sum=0;
for(i=10;i<100;i++){
    a=i/10;
    if(i%2==1&&a==7){
        sum+=i;
    }
}
printf("%d",sum);
}
int main(){
    disp_2digit_odd_sum_tens7();
    return 0;
}