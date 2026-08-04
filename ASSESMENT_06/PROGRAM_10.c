//write a program  to get a number from user print the total number of digits in that number.
#include<stdio.h>
int main(){
    int a,count=0;
    printf("Enter a number ");

    scanf("%d",&a);
    while(a>0){
        a%10;
        count++;
        a=a/10;
}
printf("total number of digits is %d",count);

}
