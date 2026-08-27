//Write a program get number from user print the total number of single-digit perfect square numbers in the number.
//Function Name: disp_single_digit_square
#include<stdio.h>
int disp_single_digit_square(int a){
    int n=a,b,c=0;
while(n>0){
        b=n%10;
        if(b==4||b==9||b==1){
            c++;
        }
        n=n/10;
    }
printf("%d total number of single digit perfect square number",c);
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    disp_single_digit_square(a);
    return 0;
}