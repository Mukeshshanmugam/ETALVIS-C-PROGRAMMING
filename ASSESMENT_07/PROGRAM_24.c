//Write a program get number from user print the total number of two-digit perfect square numbers in the number.
//Function Name: disp_two_digit_square
#include<stdio.h>
int  disp_two_digit_square(int a){
int n=a,b,c=0;
while(n>0){
        b=n%100;
        if(b==16||b==25||b==36||b==49||b==64||b==91){
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
    
    disp_two_digit_square(a);
    return 0;
}
