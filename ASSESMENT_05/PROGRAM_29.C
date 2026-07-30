//write a program to get two number from user and print the HFC of those number 
#include<stdio.h>
int main(){
int a,b,c,lmc,hcf=0;
printf("Enter a number ");
scanf("%d %d",&a,&b);
if(a>b){
    lmc=a;
}
else{
    lmc=b;
}
while(1){
    if(lmc%a==0 && lmc%b==0){
        
        break;
    }
    lmc++;
}
hcf=(a*b)/lmc;
printf("%d",hcf);

    return 0;
}
