//swap 2 numbers,a&b;
#include<stdio.h>

int swap(int *n1, int *n2);
int _swap(int a, int b);

int main(){
    int a=10,b=6;
    printf("before swap a : %d , b : %d \n",a,b);
    _swap(a,b);
    printf("before swap a : %d , b : %d \n",a,b);
    swap(&a,&b);
    printf("swap a : %d , b : %d \n",a,b);
    _swap(a,b);// reverse function

    return 0;
}
// using pointers function to save the vale at address of the actual value
// call by refrence
int swap(int *n1, int *n2){
    (*n1)=(*n1)+(*n2);
    (*n2) = (*n1)-(*n2);
    (*n1)=(*n1)-(*n2);
}
// call by value
int _swap(int a, int b){
   int c =a;
   a=b;
   b=c;
   printf("a: %d ,b: %d \n",a,b);

}