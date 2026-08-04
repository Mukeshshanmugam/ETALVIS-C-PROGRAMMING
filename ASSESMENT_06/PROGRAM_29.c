//write a program to get three number from user and print the LMC of those number 
#include<stdio.h>
int main(){
    int a,b,c,lmc=0;
    printf("enter to number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            lmc=a;
        }
    }
    if(b>a){
        if(b>c){
            lmc=b;
        }
    }
    else{
        lmc=c;
    }
    while(1){
        if( lmc%a==0 && lmc%b==0 && lmc%c==0){
            printf("%d",lmc);
            break;
        }
        lmc++;
    }
}
