//  function prototype
#include <stdio.h>


int printHello();// calling the compiler that we have decleard a function 

// main function here
int main(){
    printf("This is a function prototype: \n");

    // calling the decleard function
    printHello();

    return 0;

}

// delcleard function here
int printHello(){
    printf("Hola I am the deceleard function \n");
    return 0;
}