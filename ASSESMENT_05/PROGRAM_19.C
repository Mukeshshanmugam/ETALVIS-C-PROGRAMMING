//write a program print total number of sigle digit prime number 
#include<stdio.h>
int main(){
int a,b=0;
for(int i=2;i<10;i++){
    int c=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            c++;
        }
      
    }
    if(c==0){
          printf("%d\n",i);
        b++;
    }
}
printf("%d",b);
    return 0;
}