//write a loop program to print the two digit odd number ,below 20
//function name : disp_2digit_odd_below20
#include<stdio.h>
void  disp_2digit_odd_below20(){
for (int i=10;i<=20;i++){
    if(i%2==1){
        printf("%d\n",i);
    }
}
}
int main(){
     disp_2digit_odd_below20();
     return 0;
}