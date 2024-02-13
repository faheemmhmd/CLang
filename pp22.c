#include <stdio.h>
//pointer topointer

int main(){

    float i=100.0;
    float *ptr=&i;
    float **pptr=&ptr;

    printf("%f",**pptr);

    return 0;
}