//write a program get number from user print the total number digit which are odd in the number 
#include<stdio.h>
int main(){
int i,a,b,c=0,d;
printf("Enter a number");
scanf("%d",&a);
for(i=1;a!=0;i++){
    b=a%10;
    if(b%2==1){
        printf("%d\n",b);
      c++;
    }
    a=a/10;
}
printf("%d",c);
    return 0;
}
