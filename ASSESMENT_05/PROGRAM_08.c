//write a loop program to print the sum of two digit odd number whose ten s digit is 7.
#include<stdio.h>
int main()
{
int i,sum=0;
for(i=70;i<=80;i++){
    if((i%2)!=0){
        printf("%d\n",i);
        sum+=i;
    }
}
printf("%d",sum++);
    return 0;
}

