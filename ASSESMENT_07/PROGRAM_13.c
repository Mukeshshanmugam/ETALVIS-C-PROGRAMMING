// write a program to get a number from user and print the reverse of that number .
//function name :disp_reverse_number
#include<stdio.h>
int disp_reverse_number(int a){
  int i,b;
  for(i=1;a>0;i++){
b=a%10;
printf("%d",b);
a=a/10;
  } 
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    disp_reverse_number(a);
    return 0;

}
