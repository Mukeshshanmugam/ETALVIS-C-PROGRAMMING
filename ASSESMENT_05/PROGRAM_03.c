//write a program to print sum of 6to1.
#include<stdio.h>
int main()
{
int i,sum=0;

for(i=6;i>=1;i--){
    printf("%d\n",i);
    sum+=i;
}
printf("%d",sum++);
    return 0;
}