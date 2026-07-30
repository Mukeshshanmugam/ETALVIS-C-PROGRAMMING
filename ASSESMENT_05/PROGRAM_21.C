//write a program get number from user print the total number of two digit odd number in the number 
#include<stdio.h>
int main(){
int i,a,b,c=0,d;
printf("Enter a no:");
scanf("%d",&a);
for (i=1;i<=a;i++){
    b=a%100;
    if(b%2==1){
        printf("%d\n",b);
   c++;
    }
    a=a/10;
}
printf("%d",c);
    return 0;
}
