//Write a program to get two numbers from user and print the LCM of those numbers.
//Function Name: disp_LCM2
#include<stdio.h>
int  disp_LCM2(int a,int b){
int lmc=0;
    
if(a>b){
  lmc=a;
}
else{
lmc=b;
}
while(1){
    if(lmc%a==0&&lmc%b==0){
        printf("%d",lmc);
        break;
    }
        lmc++;
    }
}
int main(){
    int a,b;
    printf("Enter a number :");
    scanf("%d %d",&a,&b);
     disp_LCM2(a,b);
     return 0;
}