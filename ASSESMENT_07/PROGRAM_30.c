//Write a program to get two numbers from user and print the HCF of those numbers.
//Function Name: disp_count_HCF2
#include<stdio.h>
int disp_count_HCF2(int a,int b){
int lcm=0,hcf=0;
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
int main(){
    int a,b;
    printf("Enter a number :");
    scanf("%d%d",&a,&b);
    disp_count_HCF2(a,b);
    return 0;
}