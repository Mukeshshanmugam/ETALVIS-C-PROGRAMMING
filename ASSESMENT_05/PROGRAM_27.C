//write a program to get two number from user and print the LCM of those number 
#include<stdio.h>
int main(){
int a,b,c,lmc;
printf("Enter a number:");
scanf("%d %d",&a,&b);
if(a>b){
    lmc=a;
}
else{
    lmc=b;
}
for (int i=1; i=i; i++){
    if(lmc%a==0 && lmc%
        b==0){
        printf("%d",lmc);
        break;
    }
    lmc++;
}
    return 0;
}
