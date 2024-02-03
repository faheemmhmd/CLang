//print the factorial of a no.
#include <stdio.h>

int main(){
    int number;
    double factorial=1;
    printf("Enter the no. :  ");
    scanf("%d",&number);
    printf("The factorial of %d is : \n",number);
    for (int i = number; i > 1; i--)
    {
        printf("%d * ",i);
        factorial=factorial*i;
    }
    printf("1 = %f \n",factorial);
    return 0;

}