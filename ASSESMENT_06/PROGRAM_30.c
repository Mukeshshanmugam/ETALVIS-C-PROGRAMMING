//write a program to get two number from user and print the HFC of those number 
#include<stdio.h>
int main(){
   int a,b,lcm=0,hcf=0;
   printf("enter a number :");
   scanf("%d%d",&a,&b);
   if(a>b){
    lcm=a;
   } 
   else{
    lcm=b;
   }
   while(1){
    if(lcm%a==0 && lcm%b==0){

        break;
    }
    lcm++;
   }
   hcf=(a*b)/lcm;
   printf("%d",hcf);
}
