//Write a program to get three numbers from user and print the LCM of those numbers.
//Function Name: disp_LCM3
#include<stdio.h>
int disp_LCM3(int a,int b,int c){
    int lmc=0;
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
int main(){
    int a,b,c;
    printf("Enter a number :");
    scanf("%d%d%d",&a,&b,&c);
    disp_LCM3(a,b,c);
    return 0;
}