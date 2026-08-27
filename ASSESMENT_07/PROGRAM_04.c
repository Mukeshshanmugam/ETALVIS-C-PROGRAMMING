//write a loop program to print sum of 6 to 1
//function name:disp_rsum.
#include<stdio.h>
void disp_rsum(){
    int sum=0,i;
    for(i=6;i>0;i--){
        sum+=i;
    }
    printf("%d",sum);
}
int main(){
    disp_rsum();
    return 0;
}