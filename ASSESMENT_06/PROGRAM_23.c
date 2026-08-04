//Write a program get number from user print the total number of single digit perfect square number in the number 
#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b==4||b==9||b==1){
            c++;
        }
        a=a/10;
    }
printf("%d total number of single digit perfect square number",c);
}
