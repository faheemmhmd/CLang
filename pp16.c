//  function prototype
#include <stdio.h>

int printHello();

// main function here
int main(){
    printf("This is a function prototype: \n");

    // calling the decleard function
    printHello();
    char a=printHello();
    printf("%d",a);
    return 0;

}

// delcleard function here
int printHello(){
    printf("Hola I am the deceleard function \n");
    return 0;
}