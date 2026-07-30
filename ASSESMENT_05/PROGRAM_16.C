//write aprogram to get a number from user print whether that number is prime and sum of digit is equal to 14
#include<stdio.h>
int main(){
int j,i,a,b,c,sum=0,d=0;
printf("enter a number :");
scanf("%d",&a);

if(a>1){


for(i=2;i<a;i++){
    c=(a%i);
    if(c==0){
        d++;
    }
}
    if(d==0){
        printf("%d is prime",a);

    }
    else{
        printf("%d is not prime",a);
    }
}

for(j=1;j<=a;j++){
    b=a%10;
    sum+=b;
    a=(a/10);
}
    if(sum==14){
        printf("  sum of digit is 14");
    }
    else{
        printf("  sum of digit is not 14");
    }



    return 0;
}
