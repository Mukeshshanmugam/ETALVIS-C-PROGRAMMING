//write a loop program to print odd number between 1to 9.
#include<stdio.h>
int main()
{
int i;
for(i=1;i<=9;i++){
 if((i%2)!=0)
 {
    printf("%d\n",i);
 }
}
    return 0;
}