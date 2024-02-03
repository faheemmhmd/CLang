// do while loop
//sum of n natural no.s and print them in reverse
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    do
    {
        printf(" %d,",n);
        sum=sum+n;
        n--;
    } while (n>=1);

    printf("\n Total sum is : %d \n",sum);

        return 0;
    
}