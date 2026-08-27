//write a loop program to print sum of 1 to 5
// function name:disp_sum.
#include<stdio.h>
void disp_sum(){
    int sum=0,i;
 for(i=1;i<=5;i++){
    sum+=i;
 }
  printf("%d",sum);
}
int main(){
 disp_sum();
  
}