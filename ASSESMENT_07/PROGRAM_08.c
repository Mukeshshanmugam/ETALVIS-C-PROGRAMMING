// write a loop program to print the two digit even number ,who's sum of digits are 6.
// function name :disp_2digit_even_sum6.
#include<stdio.h>
void disp_2digit_even_sum6(){
    int i,a,b,sum=0;
    for(i=10;i<=100;i++){
       if(i%2==0){
          a=i%10;
        b=i/10;
        sum=a+b;
        if(sum==6){
            printf("%d\n",i);
        }
       }
        
    }
}
int main(){
    disp_2digit_even_sum6();
    return 0;
    }