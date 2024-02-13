// array item cost and final price
#include<stdio.h>

int main(){
    int item[3];
    printf("Price of item 1 : ");
    scanf("%d",&item[0]);
    printf("Price of item 2 : ");
    scanf("%d",&item[1]);
    printf("Price of item 3 : ");
    scanf("%d",&item[2]);
    float final_price = (item[0]+item[1]+item[2]) + 0.18*(item[0]+item[1]+item[2]) ;
    printf("Final price is : %f \n", final_price);

    return 0;

}