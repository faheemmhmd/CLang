#include <stdio.h>

void hello(int n);

int main(){
    hello(5);
}

void hello(int n){
    if (n==0)
    {
        return;
    }
    
    printf("Hello! \n");
    hello(n-1);
}
