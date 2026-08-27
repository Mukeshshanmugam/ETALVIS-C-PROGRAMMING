//Write a program to print biggest 4-digit number which is divisible by 7 and 9.
//Function Name: disp_biggest_4digit_div7_9
#include<stdio.h>
int disp_biggest_4digit_div7_9(int a){
int n=a,b;
if(n%7==0&&n%9==0){
    printf("%d  is divisible by 7 and 9.",n);
}
else {
    printf("the number is not divisible by 7and 9");
}
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    disp_biggest_4digit_div7_9(a);
    return 0;

}