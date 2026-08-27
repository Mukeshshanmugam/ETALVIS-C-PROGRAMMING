//Write a program get number from user print the total number digits which are odd in the number.
//Function Name: disp_total_odd_digits
#include<stdio.h>
int disp_total_odd_digits(int a){
  int n=a,b,count=0,i;
for (i=1;0<n;i++){
    b=n%10;
    if(b%2==1){
        count++;
    }
    n=n/10;
}
printf("%d",count);
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    disp_total_odd_digits(a);
    return 0;
}