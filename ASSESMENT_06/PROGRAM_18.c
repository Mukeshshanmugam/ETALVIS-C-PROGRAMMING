// write a number to get number from user print whether that number frist two digits (tens digits and ones digits ), is prime
 #include<stdio.h>
int main(){
    int a,b,c=2,d=0,e;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a%100;
    while(b>c){
     e=b%c;
        if(e==0){
            d++;
        }
            c=c+1;
            break;
        
    }
    if(d==0){
        printf("%d is prime",a);
    }
    else{
        printf("number is not prime ");
    }
}
