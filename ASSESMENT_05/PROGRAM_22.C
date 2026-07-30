//Write a program get number from user print the total number of single digit perfect square number in the number 
#include<stdio.h>
int main(){
int i,a,b=0,c=0,d;
printf("Enter a number :");
scanf("%d",&a);
while(a>0){
    b=a%10;
    if(b==1||b==9||b==4){
        c++;
        printf("%d\n",b);
    }
a=a/10;


    
}
printf("%d single digit square number",c);
    return 0;
}
