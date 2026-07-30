//write a program to print the total count of number which are less than 100000 and whose sum of digits is 14 
#include<stdio.h>
int main(){
int i,a=0,count=0,c=0,j;
for(i=0; i<100000; i++){
    a=i;
    c=0;
    for(j=0;a>j;){
     c+=a%10;
     a/=10;
    }
    if(c==14){
        count++;
    }
}
printf("%d",count);
}