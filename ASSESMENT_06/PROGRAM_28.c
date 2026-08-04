//write a program to get two number from user and print the LCM of those number
#include<stdio.h>
int main(){
    int a,b,c,lmc=0;
    printf("enter a number :");
    scanf("%d%d",&a,&b);
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

