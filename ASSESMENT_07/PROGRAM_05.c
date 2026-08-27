//write a loop program to print odd number between 1 to 9.
//function name:disp_odd.
#include<stdio.h>
void disp_odd(){
    for(int i=1;i<=9;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }

}
int main(){
    disp_odd();
    return 0;
}