//Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.
//Function Name: disp_count_sum14
#include<stdio.h>
int  disp_count_sum14(){
 int a=100000,b=0,c,d=0,count=0;
 while(a>0){
    b=a;
    d=0;
    while(b>0){
        c=b%10;
        d+=c;
        b=b/10;
    }
    if(d==14){
        count++;
    }
    a=a-1;
 }
 printf("%d",count);
}
int main(){
    
     disp_count_sum14();
     return 0;
}