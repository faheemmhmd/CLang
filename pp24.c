// write a fn to calculate the sum,product and avg of 2 no.s print that in main fn.
#include <stdio.h>

int fn(int a,int b,int *s,int *p,int *avg);

int main(){
    int x,y;
    int sum=0,product=0,avg=0;
    printf("Enter the value of X and Y : ");
    scanf("%d%d",&x,&y);
    fn(x,y,&sum,&product,&avg);
    printf("Sum : %d \n",sum);
    printf("Product : %d \n",product);
    printf("Average : %d \n",avg);

    return 0;
}


int fn(int a,int b,int *s,int *p,int *avg){
    (*s)=a+b;
    (*p)=a*b;
    (*avg)=(a+b)/2;
}