//Write a program to check if given character is digit or not.
//here we use fn called charecter type
#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    if (a>='0' && a<='9')
    {
         printf("Character is a digit \n");
    }
    else
    {
        printf("Character is not a digit \n");
    }
    return 0;
}