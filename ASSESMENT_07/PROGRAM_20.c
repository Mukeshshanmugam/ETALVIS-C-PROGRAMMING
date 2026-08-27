//Write a program print total number of single digit Prime numbers
//Function Name: single_digit_Prime
#include<stdio.h>
int single_digit_Prime(){
  int i,j,count;
  for(i=2;i<10;i++){
    count=0;
    for(j=2;j<i;j++){
        if(i%j==0){
        count++;
        }
    }
  
  if(count==0){
  printf("%d\n",i);
  }
}
}
int main(){
    
    single_digit_Prime();
    return 0;
}