#include <stdio.h>
//average of 3 no. 
int main(){
    int num1,num2,num3;
    printf("Enter the 3 no.s : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int avg=(num1+num2+num3)/3;
    printf("The avg. of the 3 no.s is : %d \n",avg);
    return 0;
}
