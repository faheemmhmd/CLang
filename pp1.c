/*a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the length & breadth of Rectangle : \n");
    scanf("%d%d",&a,&b);
    int perimeter=2*(a+b);
    printf("The perimeter is : %d \n",perimeter);
    return 0;
}