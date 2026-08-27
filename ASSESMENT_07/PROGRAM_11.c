// write a program to get a number from user print the total number of digits in that number .
//function name :count_total_digits
#include<stdio.h>
int count_total_digits(int a){
    int b,i,count=0;
    for(i=1;a>0;i++){
        b=a%10;
        count++;
        a=a/10;
    }
printf("%d",count);
}
int main(){
    int a;
    printf("Enter a number :",a);
    scanf("%d",&a);
    count_total_digits(a);

    return 0;
}