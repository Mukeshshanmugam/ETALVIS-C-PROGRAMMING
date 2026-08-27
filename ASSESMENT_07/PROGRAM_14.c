//write a program to get a number from user and interchange the first and last digits and print the result.
//function name : disp_interchange_frist_last_digit
#include<stdio.h>
int disp_interchange_frist_last_digit(int a){
  int i,j,c,b,e=1,count=0,frist,last,middle,result=0,m=a;

  for(i=1;a>0;i++){
  b=a%10;
  count++;
  a=a/10;
  }
  for(j=1;count>1;j++){
   c=e*10;
   e=c;
   count=count-1;
  }
last=m%10;
frist=m/c;
middle=(m%c)/10;
result=((last*c)+(middle*10)+frist);
printf("%d",result);
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    disp_interchange_frist_last_digit(a);
    return 0;
}