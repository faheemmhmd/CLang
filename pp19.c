// recursion sum and factorial 
#include <stdio.h>

int sum(int n);
double factorial(double n);

int main(){

    printf("sum of n : %d \n",sum(5));
    printf("factorial of n : %f \n",factorial(5));

    return 0;
}


int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;

    return sumN;
}

double factorial(double n){
    if (n==1)
    {
        return 1;
    }
    double facNm1=factorial(n-1);
    double facN= facNm1*n;
    return facN;
}